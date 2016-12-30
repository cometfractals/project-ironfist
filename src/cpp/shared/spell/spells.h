#ifndef SPELLS_H
#define SPELLS_H

#include "adventure/adv.h"

#pragma pack(push, 1)

#define NUM_SPELLS 66

struct SSpellInfo {
  char soundName[9];
  char level;
  char spriteIdx;
  char creatureEffectAnimationIdx;
  __int16 appearingChance;
  char cost;
  char nonMagicFactionAppearanceChance;
  int field_10;
  char field_14;
  unsigned __int8 attributes;
};

SSpellInfo gsSpellInfo[];

enum Spell : int {
  SPELL_FIREBALL = 0,
  SPELL_FIREBLAST = 1,
  SPELL_LIGHTNING_BOLT = 2,
  SPELL_CHAIN_LIGHTNING = 3,
  SPELL_TELEPORT = 4,
  SPELL_CURE = 5,
  SPELL_MASS_CURE = 6,
  SPELL_RESURRECT = 7,
  SPELL_RESURRECT_TRUE = 8,
  SPELL_HASTE = 9,
  SPELL_MASS_HASTE = 10,
  SPELL_SLOW = 11,
  SPELL_MASS_SLOW = 12,
  SPELL_BLIND = 13,
  SPELL_BLESS = 14,
  SPELL_MASS_BLESS = 15,
  SPELL_STONESKIN = 16,
  SPELL_STEELSKIN = 17,
  SPELL_CURSE = 18,
  SPELL_MASS_CURSE = 19,
  SPELL_HOLY_WORD = 20,
  SPELL_HOLY_SHOUT = 21,
  SPELL_ANTI_MAGIC = 22,
  SPELL_DISPEL_MAGIC = 23,
  SPELL_MASS_DISPEL = 24,
  SPELL_MAGIC_ARROW = 25,
  SPELL_BERZERKER = 26,
  SPELL_ARMAGEDDON = 27,
  SPELL_ELEMENTAL_STORM = 28,
  SPELL_METEOR_SHOWER = 29,
  SPELL_PARALYZE = 30,
  SPELL_HYPNOTIZE = 31,
  SPELL_COLD_RAY = 32,
  SPELL_COLD_RING = 33,
  SPELL_DISRUPTING_RAY = 34,
  SPELL_DEATH_RIPPLE = 35,
  SPELL_DEATH_WAVE = 36,
  SPELL_DRAGON_SLAYER = 37,
  SPELL_BLOOD_LUST = 38,
  SPELL_ANIMATE_DEAD = 39,
  SPELL_MIRROR_IMAGE = 40,
  SPELL_SHIELD = 41,
  SPELL_MASS_SHIELD = 42,
  SPELL_SUMMON_EARTH_ELEMENTAL = 43,
  SPELL_SUMMON_AIR_ELEMENTAL = 44,
  SPELL_SUMMON_FIRE_ELEMENTAL = 45,
  SPELL_SUMMON_WATER_ELEMENTAL = 46,
  SPELL_EARTHQUAKE = 47,
  SPELL_VIEW_MINES = 48,
  SPELL_VIEW_RESOURCES = 49,
  SPELL_VIEW_ARTIFACTS = 50,
  SPELL_VIEW_TOWNS = 51,
  SPELL_VIEW_HEROES = 52,
  SPELL_VIEW_ALL = 53,
  SPELL_IDENTIFY = 54,
  SPELL_SUMMON_BOAT = 55,
  SPELL_DIMENSION_DOOR = 56,
  SPELL_TOWN_GATE = 57,
  SPELL_TOWN_PORTAL = 58,
  SPELL_VISIONS = 59,
  SPELL_HAUNT = 60,
  SPELL_SET_EARTH_GUARDIAN = 61,
  SPELL_SET_AIR_GUARDIAN = 62,
  SPELL_SET_FIRE_GUARDIAN = 63,
  SPELL_SET_WATER_GUARDIAN = 64,

  SPELL_MEDUSA_PETRIFY = 101,
  SPELL_ARCHMAGI_DISPEL = 102,
  SPELL_NONE = -1,

  SPELL_AWARENESS = 65,
};


enum SPELL_ATTRIBUTES {
  ATTR_COMMON_SPELL = 0x1,
  ATTR_COMBAT_SPELL = 0x2,
  ATTR_ADVENTURE_SPELL = 0x4,
  ATTR_DURATIONED_SPELL = 0x8,
};


enum SPELL_CATEGORY {
  SPELL_CATEGORY_COMBAT = 0,
  SPELL_CATEGORY_ADVENTURE = 1,
  SPELL_CATEGORY_ALL = 2,
};

enum STACK_MODIFYING_EFFECT {
  EFFECT_HASTE = 0,
  EFFECT_SLOW = 1,
  EFFECT_BLIND = 2,
  EFFECT_BLESS = 3,
  EFFECT_CURSE = 4,
  EFFECT_BERSERKER = 5,
  EFFECT_PARALYZE = 6,
  EFFECT_HYPNOTIZE = 7,
  EFFECT_DRAGON_SLAYER = 8,
  EFFECT_BLOOD_LUST = 9,
  EFFECT_SHIELD = 10,
  EFFECT_PETRIFY = 11,
  EFFECT_ANTI_MAGIC = 12,
  EFFECT_STONESKIN = 13,
  EFFECT_STEELSKIN = 14,
};

char* gSpellNames[];

extern int __fastcall GetManaCost(int, class hero*);
int GetManaCost(int);

#pragma pack(pop)

#endif