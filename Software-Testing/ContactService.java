package edu.snhu.khan.services;

import java.util.HashMap;
import java.util.Map;
import java.util.NoSuchElementException;

public class ContactService {
    private final Map<String, Contact> contacts = new HashMap<>();

    public void addContact(Contact contact) {
        if (contact == null) throw new IllegalArgumentException("contact cannot be null");
        if (contacts.containsKey(contact.getContactId()))
            throw new IllegalArgumentException("contactId already exists");
        contacts.put(contact.getContactId(), contact);
    }

    public void deleteContact(String contactId) {
        if (!contacts.containsKey(contactId))
            throw new NoSuchElementException("contactId not found");
        contacts.remove(contactId);
    }

    public void updateFirstName(String contactId, String firstName) {
        getContact(contactId).setFirstName(firstName);
    }

    public void updateLastName(String contactId, String lastName) {
        getContact(contactId).setLastName(lastName);
    }

    public void updatePhone(String contactId, String phone) {
        getContact(contactId).setPhone(phone);
    }

    public void updateAddress(String contactId, String address) {
        getContact(contactId).setAddress(address);
    }

    public Contact getContact(String contactId) {
        Contact contact = contacts.get(contactId);
        if (contact == null) throw new NoSuchElementException("contactId not found");
        return contact;
    }
}
