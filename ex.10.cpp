#include <iostream>

using namespace std;

class NumberArray {
private:
    float* array;
    int size;

public:
    NumberArray(int s) : size(s) {
        array = new float[size];
    }


    ~NumberArray() {
        delete[] array;
    }


    void storeNumber(float number, int index) {
        if (index >= 0 && index < size)
            array[index] = number;
        else
            cout << "Index out of range!" << endl;
    }


    float retrieveNumber(int index) const {
        if (index >= 0 && index < size)
            return array[index];
        else {
            cout << "Index out of range!" << endl;
            return 0.0f; //
        }
    }


    float getHighestValue() const {
        float highest = array[0];
        for (int i = 1; i < size; ++i) {
            if (array[i] > highest)
                highest = array[i];
        }
        return highest;
    }


    float getLowestValue() const {
        float lowest = array[0];
        for (int i = 1; i < size; ++i) {
            if (array[i] < lowest)
                lowest = array[i];
        }
        return lowest;
    }


    float getAverage() const {
        float sum = 0.0f;
        for (int i = 0; i < size; ++i) {
            sum += array[i];
        }
        return sum / size;
    }
};

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    NumberArray arr(size);


    for (int i = 0; i < size; ++i) {
        float num;
        cout << "Enter number for index " << i << ": ";
        cin >> num;
        arr.storeNumber(num, i);
    }


    int index;
    cout << "Enter index to retrieve number: ";
    cin >> index;
    cout << "Number at index " << index << ": " << arr.retrieveNumber(index) << endl;


    cout << "Highest value: " << arr.getHighestValue() << endl;

    cout << "Lowest value: " << arr.getLowestValue() << endl;


    cout << "Average: " << arr.getAverage() << endl;

    return 0;
}
