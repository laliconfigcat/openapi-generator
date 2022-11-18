/**
 * OpenAPI Petstore
 * This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.3.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Dog_allOf.h"

#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <stdexcept>
#include <regex>
#include <boost/lexical_cast.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include "helpers.h"

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace server {
namespace model {

Dog_allOf::Dog_allOf(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}


std::string Dog_allOf::toJsonString(bool prettyJson /* = false */) const
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
    // workaround inspired by: https://stackoverflow.com/a/56395440
    std::regex reg("\\\"([0-9]+\\.{0,1}[0-9]*)\\\"");
    std::string result = std::regex_replace(ss.str(), reg, "$1");
    return result;
}

void Dog_allOf::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree Dog_allOf::toPropertyTree() const
{
	ptree pt;
	ptree tmp_node;
	pt.put("breed", m_Breed);
	return pt;
}

void Dog_allOf::fromPropertyTree(ptree const &pt)
{
	ptree tmp_node;
	m_Breed = pt.get("breed", "");
}

std::string Dog_allOf::getBreed() const
{
    return m_Breed;
}

void Dog_allOf::setBreed(std::string value)
{
    m_Breed = value;
}



std::vector<Dog_allOf> createDog_allOfVectorFromJsonString(const std::string& json)
{
    std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<Dog_allOf>();
    for (const auto& child: pt) {
        vec.emplace_back(Dog_allOf(child.second));
    }

    return vec;
}

}
}
}
}
