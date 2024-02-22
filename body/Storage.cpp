#include "Storage.h"


Storage* Storage::storage = nullptr;


Storage* Storage::getPtr() {
    if (storage == nullptr) {
        storage = new Storage();
    }
    return storage;
}
void Storage::setRoot(const std::string& newRoot) {
    this->root = newRoot;
}
void Storage::addTexture(const std::string& name, const std::string& path) {
    this->textures[name].loadFromFile(this->root + "/" + path);
}
void Storage::addFont(const std::string& name, const std::string& path) {
    this->fonts[name].loadFromFile(this->root + "/" + path);
}
void Storage::addSoundBuffer(const std::string& name, const std::string& path) {
    this->soundbuffers[name].loadFromFile(this->root + "/" + path);
}
void Storage::addMusic(const std::string& name, const std::string& path) {
    this->music[name].openFromFile(this->root + "/" + path);
}
sf::Texture* Storage::getTexture(const std::string& name) {
    return &this->textures[name];
}
sf::Font* Storage::getFont(const std::string& name) {
    return &this->fonts[name];
}
sf::SoundBuffer* Storage::getSoundBuffer(const std::string& name) {
    return &this->soundbuffers[name];
}
sf::Music* Storage::getMusic(const std::string& name) {
    return &this->music[name];
}
Storage::Storage() = default;