#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Polymorphisme/Moto.h"
#include "../Polymorphisme/Voiture.h"
#include "../Polymorphisme/Vehicule.h"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestPolymorphisme
{		
	TEST_CLASS(MotoTest)
	{
	public:
		
		TEST_METHOD(TestMotoInit)
		{
			double vitesse = 15.2;
			Moto moto(15.2);
			Assert::AreEqual(vitesse, moto.getVitesse());
		}

	};
}