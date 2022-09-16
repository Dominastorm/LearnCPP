#include <iostream>
#include <list>

// class is a user-defined datatype
class YouTubeChannel {
	// Make the attributes private by using a private access modifier
private:
	// Enter the attributes of the class
	std::string Name;
	int SubscribersCount;
	std::list<std::string> PublishedVideoTitles;

// this makes the attributes accessible in the DerivedClass as well
protected:
	std::string OwnerName;


public:
	// Create a constructor
	YouTubeChannel(std::string name, std::string ownerName) {
		Name = name;
		OwnerName = ownerName;
		SubscribersCount = 0;
	}

	// Function print object details
	void GetInfo() {
		std::cout << "Channel Name: " << Name << std::endl;
		std::cout << "Owner Name: " << OwnerName << std::endl;
		std::cout << "Subscriber Count: " << SubscribersCount << std::endl;
		std::cout << "Videos: " << std::endl;
		for (std::string videoTitle : PublishedVideoTitles)
			std::cout << videoTitle << std::endl;
	}

	void Subscribe() {
		SubscribersCount++;
	}

	void Unsubscribe() {
		if (SubscribersCount > 0)
			SubscribersCount--;
	}

	void PublishVideo(std::string title) {
		PublishedVideoTitles.push_back(title);
	}
};

// class DerivedClass:access BaseClass
// public means that all public attributes of BaseClass
// will be public in derived class
class CookingYouTubeChannel:public YouTubeChannel {
public:
	// You can use the constructor of the BaseClass
	CookingYouTubeChannel(std::string name, std::string ownerName):YouTubeChannel(name, ownerName) {}

	// Derived class can have its own methods
	// You can not use any private variables, you need to either put them in public or protected
	void Practice() {
		std::cout << OwnerName << " is practising cooking, learning new recipes, experimenting with spices..." << std::endl;
	}

};

int main()
{
	CookingYouTubeChannel cookingYtChannel("Amy's Kitchen", "Amy");
	CookingYouTubeChannel cookingYtChannel2("John's Kitchen", "John");
	cookingYtChannel.PublishVideo("Apple Pie");
	cookingYtChannel.PublishVideo("Chocolate Cake");
	cookingYtChannel.Subscribe();
	cookingYtChannel.Subscribe();
	cookingYtChannel.GetInfo();
	cookingYtChannel.Practice();
	cookingYtChannel2.Practice();

	system("pause > 0");
}
