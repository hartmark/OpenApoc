#include "form.h"

Form::Form( tinyxml2::XMLElement* FormConfiguration ) : Control( nullptr )
{
	// TODO: Load form

	tinyxml2::XMLElement* node;
	tinyxml2::XMLElement* usenode = nullptr;
	int minw = -1;
	int minh = -1;
	std::string nodename;

	for( node = FormConfiguration->FirstChildElement(); node != nullptr; node = node->NextSiblingElement() )
	{
		nodename = node->Name();
		if( nodename == "style" )
		{
			// TODO: Determine best "style" based on minwidth and minheight attributes
		}
	}

	if( usenode != nullptr )
	{
		// Configure form
	}

}

void Form::EventOccured( Event* e )
{
	Control::EventOccured( e );
}

void Form::Render()
{
	Control::Render();
}

void Form::Update()
{
	Control::Update();
}
