#ifndef INCLUDE_PLUGINAPI_H
#define INCLUDE_PLUGINAPI_H

#include <QObject>
#include "util/export.h"

class QDockWidget;
class QAction;

class PluginManager;
class PluginInterface;
class SampleSource;
class SampleSink;
class DSPEngine;
class AudioFifo;
class MessageQueue;
class MainWindow;
class ChannelMarker;
class PluginGUI;

class SDRANGEL_API PluginAPI : public QObject {
	Q_OBJECT

public:
	// MainWindow access
	QDockWidget* createMainWindowDock(Qt::DockWidgetArea dockWidgetArea, const QString& title);
	MessageQueue* getMainWindowMessageQueue();
	void setInputGUI(QWidget* inputGUI);

	// Channel stuff
	void registerChannel(const QString& channelName, PluginInterface* plugin, QAction* action);
	void registerChannelInstance(const QString& channelName, PluginGUI* pluginGUI);
	void addChannelRollup(QWidget* pluginGUI);
	void removeChannelInstance(PluginGUI* pluginGUI);

	void addChannelMarker(ChannelMarker* channelMarker);
	void removeChannelMarker(ChannelMarker* channelMarker);

	// Sample Source stuff
	void registerSampleSource(const QString& sourceName, PluginInterface* plugin);

	// R/O access to main window
	const MainWindow* getMainWindow() const { return m_mainWindow; }

protected:
	PluginManager* m_pluginManager;
	MainWindow* m_mainWindow;

	PluginAPI(PluginManager* pluginManager, MainWindow* mainWindow);

	friend class PluginManager;
};

#endif // INCLUDE_PLUGINAPI_H
