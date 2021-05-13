// Auto generated file
// Patch: 1.4.2
// Build: 4375

std::vector<UpdateFieldData> const UpdateFields::g_updateFieldsData =
{
    // enum EObjectFields
    { TYPEMASK_OBJECT       , "OBJECT_FIELD_GUID"                               , 0x0  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_OBJECT       , "OBJECT_FIELD_TYPE"                               , 0x2  , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_OBJECT       , "OBJECT_FIELD_ENTRY"                              , 0x3  , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_OBJECT       , "OBJECT_FIELD_SCALE_X"                            , 0x4  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_OBJECT       , "OBJECT_FIELD_PADDING"                            , 0x5  , 1  , UF_TYPE_INT      , UF_FLAG_NONE },
    { TYPEMASK_OBJECT       , "OBJECT_END"                                      , 0x6  , 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
    // enum EItemFields
    { TYPEMASK_ITEM         , "ITEM_FIELD_OWNER"                                , 0x6  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_CONTAINED"                            , 0x8  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_CREATOR"                              , 0xA  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_GIFTCREATOR"                          , 0xC  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_STACK_COUNT"                          , 0xE  , 1  , UF_TYPE_INT      , UF_FLAG_OWNER_ONLY + UF_FLAG_UNK2 },
    { TYPEMASK_ITEM         , "ITEM_FIELD_DURATION"                             , 0xF  , 1  , UF_TYPE_INT      , UF_FLAG_OWNER_ONLY + UF_FLAG_UNK2 },
    { TYPEMASK_ITEM         , "ITEM_FIELD_SPELL_CHARGES"                        , 0x10 , 5  , UF_TYPE_INT      , UF_FLAG_OWNER_ONLY + UF_FLAG_UNK2 },
    { TYPEMASK_ITEM         , "ITEM_FIELD_FLAGS"                                , 0x15 , 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_ENCHANTMENT"                          , 0x16 , 21 , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_PROPERTY_SEED"                        , 0x2B , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_RANDOM_PROPERTIES_ID"                 , 0x2C , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_ITEM         , "ITEM_FIELD_ITEM_TEXT_ID"                         , 0x2D , 1  , UF_TYPE_INT      , UF_FLAG_OWNER_ONLY },
    { TYPEMASK_ITEM         , "ITEM_FIELD_DURABILITY"                           , 0x2E , 1  , UF_TYPE_INT      , UF_FLAG_OWNER_ONLY + UF_FLAG_UNK2 },
    { TYPEMASK_ITEM         , "ITEM_FIELD_MAXDURABILITY"                        , 0x2F , 1  , UF_TYPE_INT      , UF_FLAG_OWNER_ONLY + UF_FLAG_UNK2 },
    { TYPEMASK_ITEM         , "ITEM_END"                                        , 0x30 , 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
    // enum EContainerFields
    { TYPEMASK_CONTAINER    , "CONTAINER_FIELD_NUM_SLOTS"                       , 0x30 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_CONTAINER    , "CONTAINER_ALIGN_PAD"                             , 0x31 , 1  , UF_TYPE_BYTES    , UF_FLAG_NONE },
    { TYPEMASK_CONTAINER    , "CONTAINER_FIELD_SLOT_1"                          , 0x32 , 40 , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_CONTAINER    , "CONTAINER_END"                                   , 0x5A , 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
    // enum EUnitFields
    { TYPEMASK_UNIT         , "UNIT_FIELD_CHARM"                                , 0x6  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_SUMMON"                               , 0x8  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_CHARMEDBY"                            , 0xA  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_SUMMONEDBY"                           , 0xC  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_CREATEDBY"                            , 0xE  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_TARGET"                               , 0x10 , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_PERSUADED"                            , 0x12 , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_CHANNEL_OBJECT"                       , 0x14 , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_HEALTH"                               , 0x16 , 1  , UF_TYPE_INT      , UF_FLAG_DYNAMIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POWER1"                               , 0x17 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POWER2"                               , 0x18 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POWER3"                               , 0x19 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POWER4"                               , 0x1A , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_POWER5"                               , 0x1B , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXHEALTH"                            , 0x1C , 1  , UF_TYPE_INT      , UF_FLAG_DYNAMIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXPOWER1"                            , 0x1D , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXPOWER2"                            , 0x1E , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXPOWER3"                            , 0x1F , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXPOWER4"                            , 0x20 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXPOWER5"                            , 0x21 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_LEVEL"                                , 0x22 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_FACTIONTEMPLATE"                      , 0x23 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_BYTES_0"                              , 0x24 , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_VIRTUAL_ITEM_SLOT_DISPLAY"                  , 0x25 , 3  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_VIRTUAL_ITEM_INFO"                          , 0x28 , 6  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_FLAGS"                                , 0x2E , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_AURA"                                 , 0x2F , 56 , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_AURALEVELS"                           , 0x67 , 10 , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_AURAAPPLICATIONS"                     , 0x71 , 10 , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_AURAFLAGS"                            , 0x7B , 7  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_AURASTATE"                            , 0x82 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_BASEATTACKTIME"                       , 0x83 , 2  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_RANGEDATTACKTIME"                     , 0x85 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_UNIT         , "UNIT_FIELD_BOUNDINGRADIUS"                       , 0x86 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_COMBATREACH"                          , 0x87 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_DISPLAYID"                            , 0x88 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_NATIVEDISPLAYID"                      , 0x89 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MOUNTDISPLAYID"                       , 0x8A , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MINDAMAGE"                            , 0x8B , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY + UF_FLAG_SPECIAL_INFO },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXDAMAGE"                            , 0x8C , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY + UF_FLAG_SPECIAL_INFO },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MINOFFHANDDAMAGE"                     , 0x8D , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY + UF_FLAG_SPECIAL_INFO },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXOFFHANDDAMAGE"                     , 0x8E , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY + UF_FLAG_SPECIAL_INFO },
    { TYPEMASK_UNIT         , "UNIT_FIELD_BYTES_1"                              , 0x8F , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_PETNUMBER"                            , 0x90 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_PET_NAME_TIMESTAMP"                   , 0x91 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_PETEXPERIENCE"                        , 0x92 , 1  , UF_TYPE_INT      , UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_PETNEXTLEVELEXP"                      , 0x93 , 1  , UF_TYPE_INT      , UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_DYNAMIC_FLAGS"                              , 0x94 , 1  , UF_TYPE_INT      , UF_FLAG_DYNAMIC },
    { TYPEMASK_UNIT         , "UNIT_CHANNEL_SPELL"                              , 0x95 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_MOD_CAST_SPEED"                             , 0x96 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_CREATED_BY_SPELL"                           , 0x97 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_NPC_FLAGS"                                  , 0x98 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_NPC_EMOTESTATE"                             , 0x99 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_TRAINING_POINTS"                            , 0x9A , 1  , UF_TYPE_TWO_SHORT, UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_STAT0"                                , 0x9B , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_STAT1"                                , 0x9C , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_STAT2"                                , 0x9D , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_STAT3"                                , 0x9E , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_STAT4"                                , 0x9F , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_RESISTANCES"                          , 0xA0 , 7  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY + UF_FLAG_SPECIAL_INFO },
    { TYPEMASK_UNIT         , "UNIT_FIELD_ATTACKPOWER"                          , 0xA7 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_BASE_MANA"                            , 0xA8 , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_ATTACK_POWER_MODS"                    , 0xA9 , 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_BYTES_2"                              , 0xAA , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_UNIT         , "UNIT_FIELD_RANGEDATTACKPOWER"                    , 0xAB , 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_RANGED_ATTACK_POWER_MODS"             , 0xAC , 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MINRANGEDDAMAGE"                      , 0xAD , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_MAXRANGEDDAMAGE"                      , 0xAE , 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE + UF_FLAG_OWNER_ONLY },
    { TYPEMASK_UNIT         , "UNIT_FIELD_PADDING"                              , 0xAF , 1  , UF_TYPE_INT      , UF_FLAG_NONE },
    { TYPEMASK_UNIT         , "UNIT_END"                                        , 0xB0 , 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
    // enum EPlayerFields
    { TYPEMASK_PLAYER       , "PLAYER_SELECTION"                                , 0xB0 , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_DUEL_ARBITER"                             , 0xB2 , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_FLAGS"                                    , 0xB4 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_GUILDID"                                  , 0xB5 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_GUILDRANK"                                , 0xB6 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_BYTES"                                    , 0xB7 , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_BYTES_2"                                  , 0xB8 , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_BYTES_3"                                  , 0xB9 , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_DUEL_TEAM"                                , 0xBA , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_GUILD_TIMESTAMP"                          , 0xBB , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_1_1"                            , 0xBC , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_1_2"                            , 0xBD , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_2_1"                            , 0xBF , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_2_2"                            , 0xC0 , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_3_1"                            , 0xC2 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_3_2"                            , 0xC3 , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_4_1"                            , 0xC5 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_4_2"                            , 0xC6 , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_5_1"                            , 0xC8 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_5_2"                            , 0xC9 , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_6_1"                            , 0xCB , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_6_2"                            , 0xCC , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_7_1"                            , 0xCE , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_7_2"                            , 0xCF , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_8_1"                            , 0xD1 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_8_2"                            , 0xD2 , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_9_1"                            , 0xD4 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_9_2"                            , 0xD5 , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_10_1"                           , 0xD7 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_10_2"                           , 0xD8 , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_11_1"                           , 0xDA , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_11_2"                           , 0xDB , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_12_1"                           , 0xDD , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_12_2"                           , 0xDE , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_13_1"                           , 0xE0 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_13_2"                           , 0xE1 , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_14_1"                           , 0xE3 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_14_2"                           , 0xE4 , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_15_1"                           , 0xE6 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_15_2"                           , 0xE7 , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_16_1"                           , 0xE9 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_16_2"                           , 0xEA , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_17_1"                           , 0xEC , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_17_2"                           , 0xED , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_18_1"                           , 0xEF , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_18_2"                           , 0xF0 , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_19_1"                           , 0xF2 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_19_2"                           , 0xF3 , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_20_1"                           , 0xF5 , 1  , UF_TYPE_INT      , UF_FLAG_GROUP_ONLY },
    { TYPEMASK_PLAYER       , "PLAYER_QUEST_LOG_20_2"                           , 0xF6 , 2  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_1_0"                         , 0xF8 , 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_1_PROPERTIES"                , 0x100, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_1_CREATOR"                   , 0x101, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_2_0"                         , 0x103, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_2_PROPERTIES"                , 0x10B, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_2_CREATOR"                   , 0x10C, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_3_0"                         , 0x10E, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_3_PROPERTIES"                , 0x116, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_3_CREATOR"                   , 0x117, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_4_0"                         , 0x119, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_4_PROPERTIES"                , 0x121, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_4_CREATOR"                   , 0x122, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_5_0"                         , 0x124, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_5_PROPERTIES"                , 0x12C, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_5_CREATOR"                   , 0x12D, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_6_0"                         , 0x12F, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_6_PROPERTIES"                , 0x137, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_6_CREATOR"                   , 0x138, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_7_0"                         , 0x13A, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_7_PROPERTIES"                , 0x142, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_7_CREATOR"                   , 0x143, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_8_0"                         , 0x145, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_8_PROPERTIES"                , 0x14D, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_8_CREATOR"                   , 0x14E, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_9_0"                         , 0x150, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_9_PROPERTIES"                , 0x158, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_9_CREATOR"                   , 0x159, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_10_0"                        , 0x15B, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_10_PROPERTIES"               , 0x163, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_10_CREATOR"                  , 0x164, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_11_0"                        , 0x166, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_11_PROPERTIES"               , 0x16E, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_11_CREATOR"                  , 0x16F, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_12_0"                        , 0x171, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_12_PROPERTIES"               , 0x179, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_12_CREATOR"                  , 0x17A, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_13_0"                        , 0x17C, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_13_PROPERTIES"               , 0x184, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_13_CREATOR"                  , 0x185, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_14_0"                        , 0x187, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_14_PROPERTIES"               , 0x18F, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_14_CREATOR"                  , 0x190, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_15_0"                        , 0x192, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_15_PROPERTIES"               , 0x19A, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_15_CREATOR"                  , 0x19B, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_16_0"                        , 0x19D, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_16_PROPERTIES"               , 0x1A5, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_16_CREATOR"                  , 0x1A6, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_17_0"                        , 0x1A8, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_17_PROPERTIES"               , 0x1B0, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_17_CREATOR"                  , 0x1B1, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_18_0"                        , 0x1B3, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_18_PROPERTIES"               , 0x1BB, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_18_CREATOR"                  , 0x1BC, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_19_0"                        , 0x1BE, 8  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_19_PROPERTIES"               , 0x1C6, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_VISIBLE_ITEM_19_CREATOR"                  , 0x1C7, 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_PAD_0"                              , 0x1C9, 1  , UF_TYPE_INT      , UF_FLAG_NONE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_INV_SLOT_HEAD"                      , 0x1CA, 46 , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_PACK_SLOT_1"                        , 0x1F8, 32 , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_BANK_SLOT_1"                        , 0x218, 48 , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_BANKBAG_SLOT_1"                     , 0x248, 12 , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_VENDORBUYBACK_SLOT"                 , 0x254, 2  , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FARSIGHT"                                 , 0x256, 2  , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER__FIELD_COMBO_TARGET"                      , 0x258, 2  , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_BUYBACK_NPC"                        , 0x25A, 2  , UF_TYPE_GUID     , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_XP"                                       , 0x25C, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_NEXT_LEVEL_XP"                            , 0x25D, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_SKILL_INFO_1_1"                           , 0x25E, 384, UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_CHARACTER_POINTS1"                        , 0x3DE, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_CHARACTER_POINTS2"                        , 0x3DF, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_TRACK_CREATURES"                          , 0x3E0, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_TRACK_RESOURCES"                          , 0x3E1, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_BLOCK_PERCENTAGE"                         , 0x3E2, 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_DODGE_PERCENTAGE"                         , 0x3E3, 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_PARRY_PERCENTAGE"                         , 0x3E4, 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_CRIT_PERCENTAGE"                          , 0x3E5, 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_RANGED_CRIT_PERCENTAGE"                   , 0x3E6, 1  , UF_TYPE_FLOAT    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_EXPLORED_ZONES_1"                         , 0x3E7, 64 , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_REST_STATE_EXPERIENCE"                    , 0x427, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_COINAGE"                            , 0x428, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_POSSTAT0"                           , 0x429, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_POSSTAT1"                           , 0x42A, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_POSSTAT2"                           , 0x42B, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_POSSTAT3"                           , 0x42C, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_POSSTAT4"                           , 0x42D, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_NEGSTAT0"                           , 0x42E, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_NEGSTAT1"                           , 0x42F, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_NEGSTAT2"                           , 0x430, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_NEGSTAT3"                           , 0x431, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_NEGSTAT4"                           , 0x432, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_RESISTANCEBUFFMODSPOSITIVE"         , 0x433, 7  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_RESISTANCEBUFFMODSNEGATIVE"         , 0x43A, 7  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_MOD_DAMAGE_DONE_POS"                , 0x441, 7  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_MOD_DAMAGE_DONE_NEG"                , 0x448, 7  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_MOD_DAMAGE_DONE_PCT"                , 0x44F, 7  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_BYTES"                              , 0x456, 1  , UF_TYPE_BYTES    , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_AMMO_ID"                                  , 0x457, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_PVP_MEDALS"                         , 0x458, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_BUYBACK_ITEM_ID"                    , 0x459, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_BUYBACK_RANDOM_PROPERTIES_ID"       , 0x45A, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_BUYBACK_SEED"                       , 0x45B, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_BUYBACK_PRICE"                      , 0x45C, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_BUYBACK_DURABILITY"                 , 0x45D, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_BUYBACK_COUNT"                      , 0x45E, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_SESSION_KILLS"                      , 0x45F, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_YESTERDAY_KILLS"                    , 0x460, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_LAST_WEEK_KILLS"                    , 0x461, 1  , UF_TYPE_TWO_SHORT, UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_LIFETIME_HONORBALE_KILLS"           , 0x462, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_LIFETIME_DISHONORBALE_KILLS"        , 0x463, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_YESTERDAY_CONTRIBUTION"             , 0x464, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_LAST_WEEK_CONTRIBUTION"             , 0x465, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_LAST_WEEK_RANK"                     , 0x466, 1  , UF_TYPE_INT      , UF_FLAG_PRIVATE },
    { TYPEMASK_PLAYER       , "PLAYER_FIELD_PADDING"                            , 0x467, 1  , UF_TYPE_INT      , UF_FLAG_NONE },
    { TYPEMASK_PLAYER       , "PLAYER_END"                                      , 0x468, 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
    // enum EGameObjectFields
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_DISPLAYID"                            , 0x6  , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_FLAGS"                                , 0x7  , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_ROTATION"                             , 0x8  , 4  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_STATE"                                , 0xC  , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_TIMESTAMP"                            , 0xD  , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_POS_X"                                , 0xE  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_POS_Y"                                , 0xF  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_POS_Z"                                , 0x10 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_FACING"                               , 0x11 , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_DYN_FLAGS"                            , 0x12 , 1  , UF_TYPE_INT      , UF_FLAG_DYNAMIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_FACTION"                              , 0x13 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_TYPE_ID"                              , 0x14 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_LEVEL"                                , 0x15 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_GAMEOBJECT   , "GAMEOBJECT_END"                                  , 0x16 , 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
    // enum EDynamicObjectFields
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_CASTER"                            , 0x6  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_BYTES"                             , 0x8  , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_SPELLID"                           , 0x9  , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_RADIUS"                            , 0xA  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_POS_X"                             , 0xB  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_POS_Y"                             , 0xC  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_POS_Z"                             , 0xD  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_FACING"                            , 0xE  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_PAD"                               , 0xF  , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_DYNAMICOBJECT, "DYNAMICOBJECT_END"                               , 0x10 , 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
    // enum ECorpseFields
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_OWNER"                              , 0x6  , 2  , UF_TYPE_GUID     , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_FACING"                             , 0x8  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_POS_X"                              , 0x9  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_POS_Y"                              , 0xA  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_POS_Z"                              , 0xB  , 1  , UF_TYPE_FLOAT    , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_DISPLAY_ID"                         , 0xC  , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_ITEM"                               , 0xD  , 19 , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_BYTES_1"                            , 0x20 , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_BYTES_2"                            , 0x21 , 1  , UF_TYPE_BYTES    , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_GUILD"                              , 0x22 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_FIELD_FLAGS"                              , 0x23 , 1  , UF_TYPE_INT      , UF_FLAG_PUBLIC },
    { TYPEMASK_CORPSE       , "CORPSE_END"                                      , 0x24 , 0  , UF_TYPE_NONE     , UF_FLAG_NONE },
};
