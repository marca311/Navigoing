#import "../../../rapidxml/rapidxml.hpp"

class MSRoute {
public:
	MSRoute(std::string fileOrUrl);
private:
	rapidxml::xml_document<> theDocument;
	rapidxml::xml_node<> rootNode;

	void parseFile(std::string fileName);
	void parseUrl(std::string url);
	void setVariations(rapidxml::xml_node theNode);
};
