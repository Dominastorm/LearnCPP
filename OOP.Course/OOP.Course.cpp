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
};

int main()
{
	// Create an object (an instance of the class)
	YouTubeChannel ytChannel;
	ytChannel.Name = "CodeBeauty";
	ytChannel.OwnerName = "Saldina";
	ytChannel.SubscribersCount = 1800;
	ytChannel.PublishedVideoTitles = { "C++ for beginners 1", "HTML & CSS 1", "C++ OOP 1" };

	std::cout << "Channel Name: " << ytChannel.Name << std::endl;
	std::cout << "Owner Name: " << ytChannel.OwnerName << std::endl;
	std::cout << "Subscriber Count: " << ytChannel.SubscribersCount << std::endl;
	std::cout << "Videos: " << std::endl;
	for (std::string videoTitle : ytChannel.PublishedVideoTitles)
		std::cout << videoTitle << std::endl;

	system("pause > 0");
}
