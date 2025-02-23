#include<iostream>
#include<cstring>
using namespace std;

void CopyString(char*& dest, const char* source)
{
    int size = strlen(source);
    dest = new char[size + 1];
    int i;
    for(i=0;source[i]!='\0';i++)
    {
        dest[i]=source[i];
    }
    dest[i]=source[i];
}

class ElectronicDevice
{
private:
    char* Brand;
    int WarrantyPeriod;  // In Years
public:
    ElectronicDevice(const char* nm, int w) : WarrantyPeriod(w)
    {
        CopyString(Brand, nm);
    }

    void setBrandName(const char* b)
    {
        delete[] Brand;
        CopyString(Brand, b);
    }

    const char* getBrandName() const
    {
        return Brand;
    }

    // Setter and Getter 
    void setWarrantyPeriod(int war)
    {
        WarrantyPeriod = war;
    }

    int getWarrantyPeriod() const
    {
        return WarrantyPeriod;
    }

    void display() 
    {
        cout << "Brand Name: " << Brand << "\n";
        cout << "Warranty Period: " << WarrantyPeriod << " years\n";
    }

    ~ElectronicDevice()
    {
        delete[] Brand;
    }
};

class SmartDevice : public ElectronicDevice
{
private:
    bool supportBattery;
public:
    // Constructor for SmartDevice
    SmartDevice(const char* brand, int warranty, bool temp) : ElectronicDevice(brand, warranty), supportBattery(temp) {}

    bool getsupportBattery() const
    {
        return supportBattery;
    }

    void display() 
    {
        ElectronicDevice::display();  // Call the display of ElectronicDevice
        cout << "Supports Battery: " << (supportBattery ? "Yes" : "No") << "\n";
    }
};

class SmartPhone : public SmartDevice
{
private:
    int storageCapacity;        // Storage capacity in GB.
    float cameraResolution;     // Camera resolution in megapixels.
    double price;               // Price of the device.
public:
    // Constructor for SmartPhone
    SmartPhone(const char* brand, int warranty, bool temp, int capacity, float resolution, double p)
        : SmartDevice(brand, warranty, temp), storageCapacity(capacity), cameraResolution(resolution), price(p) {}

    // Getter and Setter 
    int getStorageCapacity() const
    {
        return storageCapacity;
    }

    void setStorageCapacity(int sc)
    {
        storageCapacity = sc;
    }

    float getCameraResolution() const
    {
        return cameraResolution;
    }

    void setCameraResolution(float cr)
    {
        cameraResolution = cr;
    }

    double getPrice() const
    {
        return price;
    }

    void setPrice(double p)
    {
        price = p;
    }

    void display() 
    {
        SmartDevice::display();     
        cout << "Storage Capacity: " << storageCapacity << " GB\n";
        cout << "Camera Resolution: " << cameraResolution << " MP\n";
        cout << "Price: $" << price << "\n";
    }
};

int main()
{
    SmartPhone myPhone("Apple", 2, true, 128, 12.5, 999.99);
    cout << "SmartPhone Details: " << endl;
    myPhone.display();

    return 0;
}
