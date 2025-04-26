package edu.snhu.khan.services;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;

public class ContactTest {

    private final String VALID_ID = "123";
    private final String VALID_FIRST = "John";
    private final String VALID_LAST = "Doe";
    private final String VALID_PHONE = "1234567890";
    private final String VALID_ADDRESS = "123 Main St";

    @Test
    void testConstructor_withValidValues_createsContact() {
        Contact c = new Contact(VALID_ID, VALID_FIRST, VALID_LAST, VALID_PHONE, VALID_ADDRESS);
        assertEquals(VALID_ID, c.getContactId());
    }

    @Test
    void testSetters_withValidValues_updateFields() {
        Contact c = new Contact(VALID_ID, VALID_FIRST, VALID_LAST, VALID_PHONE, VALID_ADDRESS);
        c.setFirstName("Mike");
        c.setLastName("Smith");
        c.setPhone("0987654321");
        c.setAddress("456 Oak Ave");
        assertEquals("Mike", c.getFirstName());
        assertEquals("Smith", c.getLastName());
        assertEquals("0987654321", c.getPhone());
        assertEquals("456 Oak Ave", c.getAddress());
    }

    @Test
    void testInvalidPhone_throwsException() {
        assertThrows(IllegalArgumentException.class, () -> {
            new Contact(VALID_ID, VALID_FIRST, VALID_LAST, "123", VALID_ADDRESS);
        });
    }

    @Test
    void testNullFirstName_throwsException() {
        assertThrows(IllegalArgumentException.class, () -> {
            new Contact(VALID_ID, null, VALID_LAST, VALID_PHONE, VALID_ADDRESS);
        });
    }
}