#include <gtest/gtest.h>

TEST(SoundexTestSuite,generateSoundex_ReturnsEmptyStringForEmptyStringInput){
    char soundex[5];
    generateSoundex("", soundex); 
    EXPECT_EQ(soundex,"");
}
