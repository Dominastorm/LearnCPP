#include <iostream>
#include <list>

// class is a user-defined datatype
class YouTubeChannel {
	// Make the attributes public by using a public access modifier
public:
	// Enter the attributes of the class
	std::string Name;
	std::string OwnerName;
	int SubscribersCount;
	std::list<std::string> PublishedVideoTitles;

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
};

int main()
{
	// Create an object (an instance of the class) using constructor
	YouTubeChannel ytChannel("CodeBeauty", "Saldina");
	
	// Add videos to PublishedVideoTitles
	ytChannel.PublishedVideoTitles.push_back("C++ for beginners");
	ytChannel.PublishedVideoTitles.push_back("HTML & CSS for beginners");
	ytChannel.PublishedVideoTitles.push_back("C++ OOP");
	
	// Get channel details
	ytChannel.GetInfo();
		
	// Create another object
	YouTubeChannel ytChannel2("AmySings", "Amy");  
	
	// Get channel details
	ytChannel2.GetInfo();

	system("pause > 0");
}
