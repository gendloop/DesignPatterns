#include "flyweight.h"

SaveIcon::SaveIcon()
{
    loadIconFile();
}

void SaveIcon::draw()
{
    std::cout << "Drawing Save Icon" << std::endl;
}

void SaveIcon::loadIconFile()
{
    std::cout << "Loading Save Icon file" << std::endl;
}

OpenIcon::OpenIcon()
{
    loadIconFile();
}

void OpenIcon::draw()
{
    std::cout << "Drawing Open Icon" << std::endl;
}

void OpenIcon::loadIconFile()
{
    std::cout << "Loading Open Icon file" << std::endl;
}
