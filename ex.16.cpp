#include <iostream>

class Temperature {
private:
    int temperature;

public:
    Temperature(int temp) : temperature(temp) {}

    void setTemperature(int temp) {
        temperature = temp;
    }

    int getTemperature() const {
        return temperature;
    }

    bool isEthylFreezing() const {
        return temperature <= -173;
    }

    bool isEthylBoiling() const {
        return temperature >= 172;
    }

    bool isOxygenFreezing() const {
        return temperature <= -362;
    }

    bool isOxygenBoiling() const {
        return temperature >= -306;
    }

    bool isWaterFreezing() const {
        return temperature <= 32;
    }

    bool isWaterBoiling() const {
        return temperature >= 212;
    }
};

int main() {
    using namespace std;

    int temp;
    cout << "Enter a temperature: ";
    cin >> temp;

    Temperature t(temp);

    cout << "At " << temp << " degrees Celsius:\n";
    if (t.isEthylFreezing())
        cout << "Ethyl Alcohol will freeze.\n";
    if (t.isEthylBoiling())
        cout << "Ethyl Alcohol will boil.\n";
    if (t.isOxygenFreezing())
        cout << "Oxygen will freeze.\n";
    if (t.isOxygenBoiling())
        cout << "Oxygen will boil.\n";
    if (t.isWaterFreezing())
        cout << "Water will freeze.\n";
    if (t.isWaterBoiling())
        cout << "Water will boil.\n";

    return 0;
}
