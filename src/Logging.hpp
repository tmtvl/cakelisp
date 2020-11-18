struct LoggingSettings
{
	// verbosity
	bool tokenization;
	bool references;
	bool dependencyPropagation;
	bool buildReasons;
	bool buildProcess;
	bool compileTimeBuildObjects;
	bool fileSystem;
	bool fileSearch;
	bool metadata;
	bool processes;
};

extern LoggingSettings log;
