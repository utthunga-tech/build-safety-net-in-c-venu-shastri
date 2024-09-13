#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoundexTestSuite,generateSoundex_ReturnsEmptyStringForEmptyStringInput){
    char soundex[5];
    generateSoundex("", soundex); 
   EXPECT_EQ(strcmp(soundex, ""), 0);
}
