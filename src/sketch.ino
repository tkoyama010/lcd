#include <LiquidCrystal.h>

// 変数宣言、ピンの指定
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup()
{
  // LCDディスプレイ16x2の設定
  lcd.begin(16, 2);
  // ディスプレイ上のカーソル一の指定
  lcd.setCursor(0, 0);
  // 文字の出力
  lcd.print("I am Tetsuo.");
}

void loop()
{
}
