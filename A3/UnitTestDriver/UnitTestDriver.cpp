#include "pch.h"
#include "CppUnitTest.h"
#include "../Game/game.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestDriver
{
	TEST_CLASS(UnitTestDriver)
	{
	public:

		TEST_METHOD(Test_Player1Win_Rock)
		{
			Assert::AreEqual(STR_PLAYER1, playGame(STR_ROCK, STR_SCISSORS));
		}
		TEST_METHOD(Test_Player1Win_RPaper)
		{
			Assert::AreEqual(STR_PLAYER1, playGame(STR_PAPER, STR_ROCK));
		}
		TEST_METHOD(Test_Player1Win_Scissors)
		{
			Assert::AreEqual(STR_PLAYER1, playGame(STR_SCISSORS, STR_PAPER));
		}
		TEST_METHOD(Test_Player2Win_Rock)
		{
			Assert::AreEqual(STR_PLAYER2, playGame(STR_SCISSORS, STR_ROCK));
		}
		TEST_METHOD(Test_Player2Win_Paper)
		{
			Assert::AreEqual(STR_PLAYER2, playGame(STR_ROCK, STR_PAPER));
		}
		TEST_METHOD(Test_Player2Win_Scissors)
		{
			Assert::AreEqual(STR_PLAYER2, playGame(STR_PAPER, STR_SCISSORS));
		}
		TEST_METHOD(Test_Draw_Rock)
		{
			Assert::AreEqual(STR_DRAW, playGame(STR_ROCK, STR_ROCK));
		}
		TEST_METHOD(Test_Draw_Paper)
		{
			Assert::AreEqual(STR_DRAW, playGame(STR_PAPER, STR_PAPER));
		}
		TEST_METHOD(Test_Draw_Scissors)
		{
			Assert::AreEqual(STR_DRAW, playGame(STR_SCISSORS, STR_SCISSORS));
		}
		TEST_METHOD(Test_Invalid_Player1)
		{
			Assert::AreEqual(STR_INVALID, playGame("rock", "Rock"));
		}
		TEST_METHOD(Test_Invalid_Player2)
		{
			Assert::AreEqual(STR_INVALID, playGame("Rock", "Gun"));
		}
	};
}
