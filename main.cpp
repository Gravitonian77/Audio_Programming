#include <iostream>
#include <cmath>


const int SAMPLE_RATE = 44100;

class SineOscillator{
private:
	float frequency, amplitude, angle = 0.0f, offset = 0.0f;
public:
	SineOscillator(float freq, float amp): frequency(freq), amplitude(amp) {
		offset = 2 * M_PI * frequency / SAMPLE_RATE;
	}

	float process(){
		auto sample = amplitude * sin(angle);     // A * sin(2 * pi * f / sr)
		angle += offset;
		return sample;
	}
};

int main() {
	SineOscillator sosc(440, 0.5);
	return 0;
}
