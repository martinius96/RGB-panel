#include <RGBmatrixPanel.h>
unsigned long timer = 0; //timer
const int buttonPin1 = 5;
boolean run = false;
unsigned long lastDebounceTime1 = 0;
unsigned long debounceInterval = 50;
#define CLK 11 // MUST be on PORTB! (Use pin 11 on Mega)
#define LAT 10
#define OE 9
#define A A0
#define B A1
#define C A2
#define n 4
RGBmatrixPanel matrix(A, B, C, CLK, LAT, OE, false, 32 * n);
int second = 50;
int minute = 1;
void setup() {
  pinMode(buttonPin1, INPUT_PULLUP);
  matrix.begin();
  matrix.setTextSize(1);
  matrix.setTextWrap(false);
  matrix.fillScreen(matrix.Color333(0, 0, 0));
}
void tick() {
  if (run) {
    vykresli_cislo();
    if (second == -1) {
      second = 59;
      minute--;
    } else {
      second--;
    }
    if ((second == 0) && (minute == 0)) {
      run = false;
    }
  }
}
void vykresli_cislo() {
  matrix.setTextColor(matrix.Color333(0, 1, 0));
  matrix.setCursor(13, 5);
  switch (minute) {
    case 0:
      matrix.print(F("00"));
      break;
    case 1:
      matrix.print(F("01"));
      break;
    case 2:
      matrix.print(F("02"));
      break;
    case 3:
      matrix.print(F("03"));
      break;
    case 4:
      matrix.print(F("04"));
      break;
    case 5:
      matrix.print(F("05"));
      break;
    case 6:
      matrix.print(F("06"));
      break;
    case 7:
      matrix.print(F("07"));
      break;
    case 8:
      matrix.print(F("08"));
      break;
    case 9:
      matrix.print(F("09"));
      break;
    case 10:
      matrix.print(F("10"));
      break;
    case 11:
      matrix.print(F("11"));
      break;
    case 12:
      matrix.print(F("12"));
      break;
    case 13:
      matrix.print(F("13"));
      break;
    case 14:
      matrix.print(F("14"));
      break;
    case 15:
      matrix.print(F("15"));
      break;
    case 16:
      matrix.print(F("16"));
      break;
    case 17:
      matrix.print(F("17"));
      break;
    case 18:
      matrix.print(F("18"));
      break;
    case 19:
      matrix.print(F("19"));
      break;
    case 20:
      matrix.print(F("20"));
      break;
    case 21:
      matrix.print(F("21"));
      break;
    case 22:
      matrix.print(F("22"));
      break;
    case 23:
      matrix.print(F("23"));
      break;
    case 24:
      matrix.print(F("24"));
      break;
    case 25:
      matrix.print(F("25"));
      break;
    case 26:
      matrix.print(F("26"));
      break;
    case 27:
      matrix.print(F("27"));
      break;
    case 28:
      matrix.print(F("28"));
      break;
    case 29:
      matrix.print(F("29"));
      break;
    case 30:
      matrix.print(F("30"));
      break;
    case 31:
      matrix.print(F("31"));
      break;
    case 32:
      matrix.print(F("32"));
      break;
    case 33:
      matrix.print(F("33"));
      break;
    case 34:
      matrix.print(F("34"));
      break;
    case 35:
      matrix.print(F("35"));
      break;
    case 36:
      matrix.print(F("36"));
      break;
    case 37:
      matrix.print(F("37"));
      break;
    case 38:
      matrix.print(F("38"));
      break;
    case 39:
      matrix.print(F("39"));
      break;
    case 40:
      matrix.print(F("40"));
      break;
    case 41:
      matrix.print(F("41"));
      break;
    case 42:
      matrix.print(F("42"));
      break;
    case 43:
      matrix.print(F("43"));
      break;
    case 44:
      matrix.print(F("44"));
      break;
    case 45:
      matrix.print(F("45"));
      break;
    case 46:
      matrix.print(F("46"));
      break;
    case 47:
      matrix.print(F("47"));
      break;
    case 48:
      matrix.print(F("48"));
      break;
    case 49:
      matrix.print(F("49"));
      break;
    case 50:
      matrix.print(F("50"));
      break;
    case 51:
      matrix.print(F("51"));
      break;
    case 52:
      matrix.print(F("52"));
      break;
    case 53:
      matrix.print(F("53"));
      break;
    case 54:
      matrix.print(F("54"));
      break;
    case 55:
      matrix.print(F("55"));
      break;
    case 56:
      matrix.print(F("56"));
      break;
    case 57:
      matrix.print(F("57"));
      break;
    case 58:
      matrix.print(F("58"));
      break;
    case 59:
      matrix.print(F("59"));
      break;
    default:
      matrix.print(F("-"));
      break;
  }
  matrix.print(F(":"));
  switch (second) {
    case 0:
      matrix.print(F("00"));
      break;
    case 1:
      matrix.print(F("01"));
      break;
    case 2:
      matrix.print(F("02"));
      break;
    case 3:
      matrix.print(F("03"));
      break;
    case 4:
      matrix.print(F("04"));
      break;
    case 5:
      matrix.print(F("05"));
      break;
    case 6:
      matrix.print(F("06"));
      break;
    case 7:
      matrix.print(F("07"));
      break;
    case 8:
      matrix.print(F("08"));
      break;
    case 9:
      matrix.print(F("09"));
      break;
    case 10:
      matrix.print(F("10"));
      break;
    case 11:
      matrix.print(F("11"));
      break;
    case 12:
      matrix.print(F("12"));
      break;
    case 13:
      matrix.print(F("13"));
      break;
    case 14:
      matrix.print(F("14"));
      break;
    case 15:
      matrix.print(F("15"));
      break;
    case 16:
      matrix.print(F("16"));
      break;
    case 17:
      matrix.print(F("17"));
      break;
    case 18:
      matrix.print(F("18"));
      break;
    case 19:
      matrix.print(F("19"));
      break;
    case 20:
      matrix.print(F("20"));
      break;
    case 21:
      matrix.print(F("21"));
      break;
    case 22:
      matrix.print(F("22"));
      break;
    case 23:
      matrix.print(F("23"));
      break;
    case 24:
      matrix.print(F("24"));
      break;
    case 25:
      matrix.print(F("25"));
      break;
    case 26:
      matrix.print(F("26"));
      break;
    case 27:
      matrix.print(F("27"));
      break;
    case 28:
      matrix.print(F("28"));
      break;
    case 29:
      matrix.print(F("29"));
      break;
    case 30:
      matrix.print(F("30"));
      break;
    case 31:
      matrix.print(F("31"));
      break;
    case 32:
      matrix.print(F("32"));
      break;
    case 33:
      matrix.print(F("33"));
      break;
    case 34:
      matrix.print(F("34"));
      break;
    case 35:
      matrix.print(F("35"));
      break;
    case 36:
      matrix.print(F("36"));
      break;
    case 37:
      matrix.print(F("37"));
      break;
    case 38:
      matrix.print(F("38"));
      break;
    case 39:
      matrix.print(F("39"));
      break;
    case 40:
      matrix.print(F("40"));
      break;
    case 41:
      matrix.print(F("41"));
      break;
    case 42:
      matrix.print(F("42"));
      break;
    case 43:
      matrix.print(F("43"));
      break;
    case 44:
      matrix.print(F("44"));
      break;
    case 45:
      matrix.print(F("45"));
      break;
    case 46:
      matrix.print(F("46"));
      break;
    case 47:
      matrix.print(F("47"));
      break;
    case 48:
      matrix.print(F("48"));
      break;
    case 49:
      matrix.print(F("49"));
      break;
    case 50:
      matrix.print(F("50"));
      break;
    case 51:
      matrix.print(F("51"));
      break;
    case 52:
      matrix.print(F("52"));
      break;
    case 53:
      matrix.print(F("53"));
      break;
    case 54:
      matrix.print(F("54"));
      break;
    case 55:
      matrix.print(F("55"));
      break;
    case 56:
      matrix.print(F("56"));
      break;
    case 57:
      matrix.print(F("57"));
      break;
    case 58:
      matrix.print(F("58"));
      break;
    case 59:
      matrix.print(F("59"));
      break;
    default:
      matrix.print(F("-"));
      break;
  }
}
void tickClock() {
  if ((millis() - timer) >= 1000 || timer == 0) {
    tick();
    timer = millis();
  }
}
void loop() {
  tickClock();
  int reading1 = digitalRead(buttonPin1);
  if (reading1 == LOW ) {
    run = true;
  }
}
