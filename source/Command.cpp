#include "../include//Command.h"


void OpenCommand::execute() {
	const char* filename = takeUsersInput();

	//create a Document 
	/*
	Document doc = new Document(filename);

	m_application->add(doc);
	doc->open(); */
}

const char* OpenCommand::takeUsersInput() {
	const char* filename = "";

	return filename;
}


ParseCommand::ParseCommand(Document* document) : m_document(document) {}

void ParseCommand::execute() {
	//ToDo
	//m_document->ParseFile();
}