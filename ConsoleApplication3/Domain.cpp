#include "Domain.h"

Movie::Movie(): title(""), genre(""),year(0), likes(0), trailer("") {}

Movie::Movie(const std::string& title, const std::string& genre, int year, int likes, const std::string& trailer)
{
	this->title = title;
	this->genre = genre;
	this->year = year;
	this->likes = likes;
	this->trailer = trailer;
}

void Movie::printMovie()
{
	std::cout << "Title: " << this->getTitle() << "; Genre: " << this->getGenre() << "; Year: "
		<< this->getYear() << "; Likes: " << this->getLikes() << "; Trailer: "
		<< this->getTrailer() << ";\n";
}

std::string Movie::getTitle()
{
	return this->title;
}

bool Movie::operator<(Movie m)
{

	return this->getTitle().compare(m.getTitle());
}

std::string Movie::getGenre()
{
	return this->genre;
}

std::string Movie::getTrailer()
{
	return this->trailer;
}

void Movie::updateMovie(const std::string& newTitle, const std::string& newGenre, const std::string& newYear, const std::string& newLikes, const std::string& newTrailer)
{
	if (newTitle != "") this->title = newTitle;
	if (newGenre != "") this->genre = newGenre;
	if (newYear != "") this->year = atoi(newYear.c_str());
	if (newLikes != "") this->likes = atoi(newLikes.c_str());
	if (newTrailer != "") this->trailer = newTrailer;
}

int Movie::getYear()
{
	return this->year;
}

int Movie::getLikes()
{
	return this->likes;
}
