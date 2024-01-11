#include <iostream>

class SineOscillator{
private:
	float frequency, amplitude;
public:
	SineOscillator(float freq, float amp): frequency(freq), amplitude(amp) {}
	float process(){

	}
};

int main() {
	std::cout << "Hello, World!" << std::endl;
	return 0;
}
