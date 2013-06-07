#import <iostream>
#import "MSRoute.h"

using namespace std;

MSRoute::MSRoute(string fileOrUrl) {
	if (!fileOrUrl.find("http")) {

	}
}

void parseFile(string fileName) {

}

void parseUrl(string url) {

}

void setVariations(rapidxml::xml_node theNode) {
	//Get number of nodes and then turn them into an array of MSVariations
}
