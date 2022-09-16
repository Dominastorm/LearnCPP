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
	int ContentQuality;
public:
	// Create a constructor
	YouTubeChannel(std::string name, std::string ownerName) {
		Name = name;
		OwnerName = ownerName;
		SubscribersCount = 0;
		ContentQuality = 0;
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

	void CheckAnalytics() {
		if (ContentQuality < 5)
			std::cout << Name << " has bad quality content." << std::endl;
		else
			std::cout << Name << " has great qualitly content." << std::endl;
	}
};

// class DerivedClass:access BaseClass
// public means that all public attributes of BaseClass
// will be public in derived class
class CookingYouTubeChannel :public YouTubeChannel {
public:
	// You can use the constructor of the BaseClass
	CookingYouTubeChannel(std::string name, std::string ownerName) :YouTubeChannel(name, ownerName) {}

	// Derived class can have its own methods
	// You can not use any private variables, you need to either put them in public or protected
	void Practice() {
		std::cout << OwnerName << " is practising cooking, learning new recipes, experimenting with spices..." << std::endl;
		ContentQuality++;
	}

};

class SingersYouTubeChannel :public YouTubeChannel {
public:
	// You can use the constructor of the BaseClass
	SingersYouTubeChannel(std::string name, std::string ownerName) :YouTubeChannel(name, ownerName) {}

	// Derived class can have its own methods
	// You can not use any private variables, you need to either put them in public or protected
	void Practice() {
		std::cout << OwnerName << " is taking singing classes, learning new songs, learning how to dance..." << std::endl;
		ContentQuality++;
	}
};

int main()
{
	CookingYouTubeChannel cookingYtChannel("Amy's Kitchen", "Amy");
	SingersYouTubeChannel singersYtChannel("JohnSings", "John");

	cookingYtChannel.Practice();
	singersYtChannel.Practice();
	singersYtChannel.Practice();
	singersYtChannel.Practice();
	singersYtChannel.Practice();
	singersYtChannel.Practice();
	singersYtChannel.Practice();

	// create pointers to the channels
	// Note: Pointer of a base class can point to a derived class
	YouTubeChannel* yt1 = &cookingYtChannel;
	YouTubeChannel* yt2 = &singersYtChannel;

	yt1->CheckAnalytics();
	yt2->CheckAnalytics();

	system("pause > 0");
}
