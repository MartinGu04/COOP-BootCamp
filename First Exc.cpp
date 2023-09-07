// Online C++ compiler to run C++ program online
#include <iostream>

float WeightedAverage(float x[], float w[], size_t l) {
    float a = 0.0;
    float b = 0.0;

    for(int i=0; i<l; i++) {
        a+= x[i] * w[i];
        b+= w[i];
    
    }

    return a / b;
}

int main() {
    float a[] = {2.0, 3.0, 4.0, 5.0};
    float b[] = {0.2, 0.3, 0.4, 0.5};

    int l = sizeof(a) / sizeof(float);

    float c = WeightedAverage(a, b, l);

    printf("%f", c);

    return 1;
}



// second exc

// Online C++ compiler to run C++ program online
#include <iostream>


    bool IsArithmeticProgression(int* arr, int size = 3) {

    int d = arr[1]-arr[0];
    for(int i = 1; i<size-1;i++)
    {
        if(arr[i+1] - arr[i] != d)
        {
            return false;
        }
    }
    return true;
    }
    
int main() {
    int num;
    std::cout << "Enter size ";
    std::cin >> num;
    if (num < 3) {
           num = 3;
    }
int arr[3];
    std::cout << "please enter some numbers \n ";
    for (int i = 0; i < num; i++) {
        std::cout << "Enter a number: ";
        std::cin >> arr[i];
    }

 if (IsArithmeticProgression(arr, num)) {
        std::cout << "you did Arithmetic Progression\n";
    } else {
        std::cout << "you did not Arithmetic Progression.\n";
    }

    

}