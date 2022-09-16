#include <iostream>
#include <list>

// class is a user-defined datatype
class YouTubeChannel {
	// Make the attributes private by using a private access modifier
private:
	// Enter the attributes of the class
	std::string Name;
	std::string OwnerName;
	int SubscribersCount;
	std::list<std::string> PublishedVideoTitles;

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

int main()
{
	// Create an object (an instance of the class) using constructor
	YouTubeChannel ytChannel("CodeBeauty", "Saldina");

	// Add videos to PublishedVideoTitles
	ytChannel.PublishVideo("C++ for beginners");
	ytChannel.PublishVideo("HTML & CSS for beginners");
	ytChannel.PublishVideo("C++ OOP");
	
	ytChannel.Unsubscribe();

	// Get channel details
	ytChannel.GetInfo();

	
	system("pause > 0");
}
