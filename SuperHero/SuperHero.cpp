#include <iostream>
#include <string>

using namespace std;

class Ability abstract
{
protected:
	char* abilityname;
public:
	virtual void Show() = 0;
	virtual void Ability1() = 0;	
};
class SuperFly abstract : public Ability
{
public:
	virtual void Ability1() override
	{
		cout << "SuperHero can fly" << endl;
	}	
};
class SuperSpeed abstract : public Ability
{
public:
	virtual void Ability1() override
	{
		cout << "SuperHero have superspeed" << endl;
	}
};
class Bulletproof abstract : public Ability
{
public:
	virtual void Ability1() override
	{
		cout << "SuperHero is bulletproof" << endl;
	}
};
class SuperStrength abstract : public Ability
{
public:
	virtual void Ability1() override
	{
		cout << "SuperHero have SuperStength" << endl;
	}
};
class Human abstract
{

public:
	virtual void Activity() = 0;
};
class Animal abstract
{
public:
	virtual void Activity() = 0;
};
class Deity abstract
{
public:
	virtual void Activity() = 0;
};
class SuperHero abstract
{
public:
	virtual void Activity() = 0;
};
class IronMan : public SuperHero, public Human, public SuperStrength
{
public:
	virtual void Show() override
	{
		cout << "IronMan - Tony Stark" << endl;
		cout << "Inventor, adventurer, Lovelace" << endl;
		cout << "Have protected iron suit" << endl;
	}
	virtual void Ability1() override 
	{
		cout << "SuperHero have SuperStength and having superhuman abilities" << endl;
	}
};
class Tor : public SuperHero, public Human, public SuperStrength
{
public:
	virtual void Show() override
	{
		cout << "Tor - sun of Odin" << endl;
		cout << "Ñourage, valor" << endl;
		cout << "Have protected magic hammer" << endl;
	}
	virtual void Ability1() override 
	{
		cout << "SuperHero have SuperStength and having superhuman abilities" << endl;
	}
	virtual void Activity() override
	{
		cout << "Tor" << endl;
	}
};
class Hulk : public SuperHero, public Human, public SuperStrength
{
public:
	virtual void Show() override
	{
		cout << "Hulk - Bruce Benner" << endl;
		cout << "Huge, ungovernable, evil" << endl;
		cout << "Green Monster" << endl;
	}
	virtual void Ability1() override 
	{
		cout << "SuperHero have SuperStength and having superhuman abilities" << endl;
	}
	virtual void Activity() override
	{
		cout << "Hulk" << endl;
	}
};
class SpiderMan : public SuperHero, public Human, public SuperStrength
{
public:
	virtual void Show() override
	{
		cout << "SpiderMan - Peter Parker" << endl;
		cout << "Very dexterous, courage, kind" << endl;
		cout << "Have red/blue suit" << endl;
	}
	virtual void Ability1() override 
	{
		cout << "SuperHero have SuperStength and can climb by sheer wall" << endl;
	}
	virtual void Activity() override
	{
		cout << "SpiderMan" << endl;
	}
};
class Wolverine : public SuperHero, public Animal, public SuperStrength
{
public:
	virtual void Show() override
	{
		cout << "Wolverine - James Howlett" << endl;
		cout << "Very dexterous, excellent tactician and strategist" << endl;
		cout << "Mutant" << endl;
	}
	virtual void Ability1() override
	{
		cout << "SuperHero have SuperStength and having superhuman abilities" << endl;
	}
	virtual void Activity() override
	{
		cout << "Rossomaha" << endl;
	}
};
class Groot : public SuperHero, public Deity, public SuperStrength
{
public:
	virtual void Show() override
	{
		cout << "Groot - treelike humanoid" << endl;
		cout << "Invader, regenerative" << endl;		
	}
	virtual void Ability1() override
	{
		cout << "SuperHero have SuperStength and having superhuman abilities" << endl;
	}
	virtual void Activity() override
	{
		cout << "Groot" << endl;
	}
};

int main()
{
	Wolverine wvr;
	wvr.Show();
	wvr.Ability1();
	wvr.Activity();
	Groot grt;
	grt.Show();
	grt.Activity();	
}