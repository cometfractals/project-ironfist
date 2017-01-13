#ifndef SOUND_H
#define SOUND_H

#include "manager.h"

typedef void* HDIGDRIVER;

#pragma pack(push,1)

class soundManager : public baseManager {
public:
  int redbookStatus;
  HDIGDRIVER hdidriver;
  int field_3E;
  char _0[22];
  void * hsamples[14];  //HSAMPLE hsamples[14];
  int field_90;
  int field_94;
  int numSamplesAllocated;
  char _1[84];
  char _2[1152];
  int field_570;
  int _3;
  int field_578;
  char currentTrack;
  char _4[267];
  int aiMusicOff;
  int volRelated;
  int _5;
  int field_694;
  int field_698;
  __int16 outputDeviceID;
  int usingCDAudio;// int field_69E;
  int usingRedbookRelated;
  int field_6A6;
  float field_6AA;
  int someTick;
  soundManager();

  void SwitchAmbientMusic(int track);
  struct _SAMPLE * MemorySample(sample*);
  int CDIsPlaying();
  int CDIsPlaying_orig();
  void CDStartup();
  void CDStartup_orig();
  void CDShutdown();
  void CDShutdown_orig();
  void CDPlay(int track_number, signed int a3, int a4, int a5);
  void CDStop();
  void CDSetVolume(int, int);
  void CDSetVolume_orig(int, int);
  int ConvertVolume(int, int);
  int ConvertVolume_orig(int, int);
  void ServiceSound();
};

#pragma pack(pop)

extern soundManager *gpSoundManager;

extern unsigned char giTerrainToMusicTrack[];
extern signed char townTheme[];

extern struct SAMPLE2 __fastcall LoadPlaySample(char *);

#endif