#include <LiquidCrystal.h>

// $BJQ?t@k8@!"%T%s$N;XDj(B
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup()
{
  // LCD$B%G%#%9%W%l%$(B16x2$B$N@_Dj(B
  lcd.begin(16, 2);
  // $B%G%#%9%W%l%$>e$N%+!<%=%k0l$N;XDj(B
  lcd.setCursor(0, 0);
  // $BJ8;z$N=PNO(B
  lcd.print("I am Tetsuo.");
}

void loop()
{
}
