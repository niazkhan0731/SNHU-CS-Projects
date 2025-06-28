from pymongo import MongoClient
from bson.objectid import ObjectId

class AnimalShelter(object):
    """ CRUD operations for Animal collection in MongoDB """

    def __init__(self, user='aacuser', password='SNHU1234', host='nv-desktop-services.apporto.com', port=30214, db='AAC', col='animals'):
        # Initialize MongoClient and database/collection handles
        self.client = MongoClient(f'mongodb://{user}:{password}@{host}:{port}/?authSource=admin')
        self.database = self.client[db]
        self.collection = self.database[col]

    # Create method to insert a document
    def create(self, data):
        if data:
            result = self.collection.insert_one(data)
            return True if result.inserted_id else False
        else:
            return False

    # Read method to find documents (including all if query is empty)
    def read(self, query=None):
        if query is None or not query:
            results = self.collection.find({})
        else:
            results = self.collection.find(query)
        return list(results)

    # Read all documents without any filter
    def read_all(self):
        return list(self.collection.find({}, {"_id": False}))

    # Update method to modify documents
    def update(self, query, new_values):
        if query and new_values:
            result = self.collection.update_many(query, {'$set': new_values})
            return result.modified_count
        else:
            return 0

    # Delete method to remove documents
    def delete(self, query):
        if query:
            result = self.collection.delete_many(query)
            return result.deleted_count
        else:
            return 0