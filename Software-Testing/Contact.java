package edu.snhu.khan.services;

public class Contact {
    private final String contactId;
    private String firstName;
    private String lastName;
    private String phone;
    private String address;

    public Contact(String contactId, String firstName, String lastName, String phone, String address) {
        validateContactId(contactId);
        this.contactId = contactId;
        setFirstName(firstName);
        setLastName(lastName);
        setPhone(phone);
        setAddress(address);
    }

    private void validateContactId(String id) {
        if (id == null || id.length() > 10) throw new IllegalArgumentException("contactId cannot be null or exceed 10 characters");
    }

    public String getContactId() { return contactId; }

    public String getFirstName() { return firstName; }
    public void setFirstName(String firstName) {
        if (firstName == null || firstName.length() > 10)
            throw new IllegalArgumentException("firstName cannot be null or exceed 10 characters");
        this.firstName = firstName;
    }

    public String getLastName() { return lastName; }
    public void setLastName(String lastName) {
        if (lastName == null || lastName.length() > 10)
            throw new IllegalArgumentException("lastName cannot be null or exceed 10 characters");
        this.lastName = lastName;
    }

    public String getPhone() { return phone; }
    public void setPhone(String phone) {
        if (phone == null || !phone.matches("\\d{10}"))
            throw new IllegalArgumentException("phone must be exactly 10 digits");
        this.phone = phone;
    }

    public String getAddress() { return address; }
    public void setAddress(String address) {
        if (address == null || address.length() > 30)
            throw new IllegalArgumentException("address cannot be null or exceed 30 characters");
        this.address = address;
    }
}
