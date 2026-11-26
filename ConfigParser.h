class ConfigParser {
public:
	bool Load(const std::string& filePath);

	int GetInt(const std::string& key, int defaultValue = 0)
}