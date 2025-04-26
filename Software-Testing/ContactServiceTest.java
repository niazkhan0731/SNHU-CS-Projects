package edu.snhu.khan.services;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

import java.util.NoSuchElementException;

public class ContactServiceTest {

    private ContactService service;

    @BeforeEach
    void setUp() {
        service = new ContactService();
    }

    @Test
    void testAdd_withUniqueId_successfullyAdds() {
        Contact c = new Contact("001", "John", "Doe", "1234567890", "123 Main St");
        service.addContact(c);
        assertEquals(c, service.getContact("001"));
    }

    @Test
    void testAdd_withDuplicateId_throwsException() {
        Contact c1 = new Contact("001", "John", "Doe", "1234567890", "123 Main St");
        Contact c2 = new Contact("001", "Jane", "Doe", "1234567890", "123 Main St");
        service.addContact(c1);
        assertThrows(IllegalArgumentException.class, () -> service.addContact(c2));
    }

    @Test
    void testDelete_withValidId_removesContact() {
        Contact c = new Contact("001", "John", "Doe", "1234567890", "123 Main St");
        service.addContact(c);
        service.deleteContact("001");
        assertThrows(NoSuchElementException.class, () -> service.getContact("001"));
    }

    @Test
    void testUpdateContactFields_updatesAll() {
        Contact c = new Contact("001", "John", "Doe", "1234567890", "123 Main St");
        service.addContact(c);
        service.updateFirstName("001", "Mike");
        service.updateLastName("001", "Smith");
        service.updatePhone("001", "0987654321");
        service.updateAddress("001", "789 Birch Rd");

        Contact updated = service.getContact("001");
        assertEquals("Mike", updated.getFirstName());
        assertEquals("Smith", updated.getLastName());
        assertEquals("0987654321", updated.getPhone());
        assertEquals("789 Birch Rd", updated.getAddress());
    }

    @Test
    void testDelete_withInvalidId_throwsException() {
        assertThrows(NoSuchElementException.class, () -> service.deleteContact("999"));
    }
}