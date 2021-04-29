/*
    ,--.                     ,--.     ,--.  ,--.
  ,-'  '-.,--.--.,--,--.,---.|  |,-.,-'  '-.`--' ,---. ,--,--,      Copyright 2018
  '-.  .-'|  .--' ,-.  | .--'|     /'-.  .-',--.| .-. ||      \   Tracktion Software
    |  |  |  |  \ '-'  \ `--.|  \  \  |  |  |  |' '-' '|  ||  |       Corporation
    `---' `--'   `--`--'`---'`--'`--' `---' `--' `---' `--''--'    www.tracktion.com

    Tracktion Engine uses a GPL/commercial licence - see LICENCE.md for details.
*/

namespace tracktion_engine
{

/** A list of settings the engine will get and set */
enum class SettingID
{
    invalid,
    addAntiDenormalNoise,
    audio_device_setup,
    audiosettings,
    autoFreeze,
    autoTempoMatch,
    autoTempoDetect,
    automapVst,
    automapNative,
    automapGuids1,
    automapGuids2,
    cacheSizeSamples,
    compCrossfadeMs,
    countInMode,
    clickTrackMidiNoteBig,
    clickTrackMidiNoteLittle,
    clickTrackSampleSmall,
    clickTrackSampleBig,
    crossfadeBlock,
    cpu,
    customMidiControllers,
    deadMansPedal,
    defaultMidiOutDevice,
    defaultWaveOutDevice,
    defaultMidiInDevice,
    defaultWaveInDevice,
    externControlIn,
    externControlOut,
    externControlShowSelection,
    externControlSelectionColour,
    externControlEnable,
    externOscInputPort,
    externOscOutputPort,
    externOscOutputAddr,
    filterControlMappingPresets,
    filterGui,
    fitClipsToRegion,
    findExamples,
    freezePoint,
    hasEnabledMidiDefaultDevs,
    glideLength,
    grooveTemplates,
    internalBuffer,
    knownPluginList,
    knownPluginList64,
    lameEncoder,
    lastClickTrackLevel,
    lastEditRender,
    lowLatencyBuffer,
    MCUoneTouchRecord,
    maxLatency,
    midiin,
    midiout,
    midiEditorOctaves,
    midiProgramManager,
    newMarker,
    numThreadsForPluginScanning,
    projectList,
    projects,
    recentProjects,
    renameClipRenamesSource,
    renameMode,
    renderRecentFilesList,
    resetCursorOnStop,
    retrospectiveRecord,
    reWireEnabled,
    safeRecord,
    sendControllerOffMessages,
    simplifyAfterRecording,
    snapCursor,
    tempDirectory,
    trackExpansionMode,
    use64Bit,
    xFade,
    xtCount,
    xtIndices,
    virtualmididevices,
    virtualmidiin,
    useSeparateProcessForScanning,
    useRealtime,
    wavein,
    waveout,
    windowsDoubleClick,

    renderFormat,
    trackRenderSampRate,
    trackRenderBits,
    bypassFilters,
    markedRegion,
    editClipRenderSampRate,
    editClipRenderBits,
    editClipRenderDither,
    editClipRealtime,
    editClipRenderStereo,
    editClipRenderNormalise,
    editClipRenderRMS,
    editClipRenderRMSLevelDb,
    editClipRenderPeakLevelDb,
    editClipPassThroughFilters,
    exportFormat,
    renderOnlySelectedClips,
    renderOnlyMarked,
    renderNormalise,
    renderRMS,
    renderRMSLevelDb,
    renderPeakLevelDb,
    renderTrimSilence,
    renderSampRate,
    renderStereo,
    renderBits,
    renderDither,
    quality,
    addId3Info,
    realtime,
    passThroughFilters,
};

} // namespace tracktion_engine
