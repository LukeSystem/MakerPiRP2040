/** ===============================================
# oled_1.ino
#	s.kawano @ lukesystem Inc.
#	Ver.001 2023/08/19	初版
#
#	Maker Pi RP2040 のLEDを点滅させる。
# ===============================================*/
#include <FastLED.h>
#define NUM_LEDS 2

CRGB leds[NUM_LEDS];

void setup() {
	FastLED.addLeds<WS2812B, 18>(leds, NUM_LEDS);
}

void loop() {
	int i;

	leds[0] = CRGB(50, 10, 10);
	leds[1] = CRGB(10, 50, 10);
	FastLED.show();
	delay(30);


	leds[0] = CRGB::Black;
	leds[1] = CRGB::Black;
	FastLED.show();
	delay(300);

}
