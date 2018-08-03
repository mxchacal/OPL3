#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveformModulated OP1;   //xy=441.6666666666663,467.9999999999997
AudioSynthWaveformModulated OP2; //xy=769,470
AudioSynthWaveformModulated OP3;  //xy=435,666
AudioSynthWaveformModulated OP4; //xy=767,669

AudioMixer4              MIX1;         //xy=497,402
AudioMixer4              MIX2; //xy=824.3333333333337,404.0000000000003
AudioMixer4              MIX3; //xy=490.3333333333337,600.0000000000002
AudioMixer4              MIX4; //xy=822.3333333333337,603.0000000000002

AudioEffectEnvelope      ENV1;      //xy=567,468
AudioEffectEnvelope      ENV2; //xy=894.3333333333337,470.0000000000003
AudioEffectEnvelope      ENV3; //xy=554.3333435058594,666
AudioEffectEnvelope      ENV4; //xy=893.3333129882812,668

AudioMixer4              MIX;         //xy=1063,544

AudioOutputAnalog        dac1;           //xy=1186,544

AudioConnection          patchCord1(OP3, ENV3);
AudioConnection          patchCord2(OP1, ENV1);
AudioConnection          patchCord3(MIX3, 0, OP3, 0);
AudioConnection          patchCord4(MIX1, 0, OP1, 0);
AudioConnection          patchCord5(ENV3, 0, MIX1, 2);
AudioConnection          patchCord6(ENV3, 0, MIX2, 2);
AudioConnection          patchCord7(ENV3, 0, MIX, 2);
AudioConnection          patchCord8(ENV1, 0, MIX, 0);
AudioConnection          patchCord9(OP4, ENV4);
AudioConnection          patchCord10(OP2, ENV2);
AudioConnection          patchCord11(MIX4, 0, OP4, 0);
AudioConnection          patchCord12(MIX2, 0, OP2, 0);
AudioConnection          patchCord13(ENV4, 0, MIX3, 3);
AudioConnection          patchCord14(ENV4, 0, MIX1, 3);
AudioConnection          patchCord15(ENV4, 0, MIX2, 3);
AudioConnection          patchCord16(ENV4, 0, MIX, 3);
AudioConnection          patchCord17(ENV4, 0, MIX4, 3);
AudioConnection          patchCord18(ENV2, 0, MIX1, 1);
AudioConnection          patchCord19(ENV2, 0, MIX, 1);
AudioConnection          patchCord20(MIX, dac1);
// GUItool: end automatically generated code
