#import <CoreSpeech/CSGestureMonitor.h>
#import <CoreSpeech/CSBluetoothWirelessSplitterInfo.h>
#import <CoreSpeech/NviDataLogger.h>
#import <CoreSpeech/CSGestureMonitorPhone.h>
#import <CoreSpeech/CSUtteranceMetadataManager.h>
#import <CoreSpeech/CSVoiceTriggerAssetHandler.h>
#import <CoreSpeech/CSAudioSessionController.h>
#import <CoreSpeech/CSSiriDebugConnection.h>
#import <CoreSpeech/CSCommandControlListenerOption.h>
#import <CoreSpeech/CSMediaPlayingMonitor.h>
#import <CoreSpeech/CSMSNExceptionManager.h>
#import <CoreSpeech/CSVolumeMonitor.h>
#import <CoreSpeech/CSSpeakerIdNviOrchestrator.h>
#import <CoreSpeech/CSTimerMonitor.h>
#import <CoreSpeech/CSAlarmMonitor.h>
#import <CoreSpeech/CSAudioStreamHolding.h>
#import <CoreSpeech/CSAssetManagerEnablePolicyFactory.h>
#import <CoreSpeech/CSBiometricMatchMonitor.h>
#import <CoreSpeech/CSAudioZeroCounter.h>
#import <CoreSpeech/CSVoiceTriggerXPCService.h>
#import <CoreSpeech/CSAudioFileManager.h>
#import <CoreSpeech/CSVoiceTriggerAssetDownloadMonitor.h>
#import <CoreSpeech/CSInvalidSATEntriesCleaner.h>
#import <CoreSpeech/CSSmartSiriVolume.h>
#import <CoreSpeech/CSAudioPreprocessor.h>
#import <CoreSpeech/CSAssetDownloadingOption.h>
#import <CoreSpeech/CSSpIdVTTextDependentSpeakerRecognizer.h>
#import <CoreSpeech/CSBluetoothManager.h>
#import <CoreSpeech/CSVoiceTriggerEnabledPolicyMac.h>
#import <CoreSpeech/CSUserVoiceProfileStore.h>
#import <CoreSpeech/CSSiriAssertionMonitor.h>
#import <CoreSpeech/CSAudioFileReader.h>
#import <CoreSpeech/RMSSample.h>
#import <CoreSpeech/CSShadowMicScoreCreator.h>
#import <CoreSpeech/CSContinuousVoiceTrigger.h>
#import <CoreSpeech/CSHearstSecondPassRequest.h>
#import <CoreSpeech/CSVoiceTriggerFirstPassHearst.h>
#import <CoreSpeech/CSAudioRouteChangeMonitorImplWatch.h>
#import <CoreSpeech/CSAudioSampleRateConverter.h>
#import <CoreSpeech/CSLanguageDetectorAssetMonitor.h>
#import <CoreSpeech/CSOpportuneSpeakListener.h>
#import <CoreSpeech/CSVoiceIdXPCClient.h>
#import <CoreSpeech/CSVoiceTriggerFirstPassJarvis.h>
#import <CoreSpeech/CSSpIdProcessor.h>
#import <CoreSpeech/CSSelfTriggerDetectorEnabledPolicyGibraltar.h>
#import <CoreSpeech/CSNNVADEndpointAnalyzer.h>
#import <CoreSpeech/CSBuiltInVoiceTriggerEnabledPolicy.h>
#import <CoreSpeech/CSActivationXPCClient.h>
#import <CoreSpeech/CSLanguageDetector.h>
#import <CoreSpeech/CSOpportuneSpeakBehaviorMonitor.h>
#import <CoreSpeech/CSAudioRecordContext.h>
#import <CoreSpeech/CSStopRecordingOptions.h>
#import <CoreSpeech/CSVoiceProfileTrainer.h>
#import <CoreSpeech/CSMyriadSelfTriggerCoordinator.h>
#import <CoreSpeech/CSVTUITrainingManager.h>
#import <CoreSpeech/CSAggregator.h>
#import <CoreSpeech/CSSpeakerModel.h>
#import <CoreSpeech/CSCommandControlStreamEventMonitor.h>
#import <CoreSpeech/CSSelfTriggerDetectorEnabledPolicyFactory.h>
#import <CoreSpeech/CSAVVCRecordingClientMonitor.h>
#import <CoreSpeech/CSSpeechControllerMonitor.h>
#import <CoreSpeech/CSSpIdVTSpeakerRecognizer.h>
#import <CoreSpeech/CSSelectiveChannelAudioFileWriter.h>
#import <CoreSpeech/CSAudioSessionMonitor.h>
#import <CoreSpeech/CSSpeakerModelRetrainer.h>
#import <CoreSpeech/CSCoreSpeechServices.h>
#import <CoreSpeech/CSOpportuneSpeakListenerDeviceManager.h>
#import <CoreSpeech/CSAVVoiceTriggerClientManager.h>
#import <CoreSpeech/CSConfig.h>
#import <CoreSpeech/CSEncryptedAudioFileReader.h>
#import <CoreSpeech/CSSpeechManager.h>
#import <CoreSpeech/CSSpeechEndHostTimeEstimator.h>
#import <CoreSpeech/CSClamshellStateMonitor.h>
#import <CoreSpeech/CSSpIdImplicitTraining.h>
#import <CoreSpeech/CSCommandControlListener.h>
#import <CoreSpeech/CSVoiceProfileManager.h>
#import <CoreSpeech/CSAssetManager.h>
#import <CoreSpeech/CSVTUITrainingSession.h>
#import <CoreSpeech/NviDirectionalitySignalProvider.h>
#import <CoreSpeech/CSKeywordAnalyzerNDEAPI.h>
#import <CoreSpeech/CSSpeechController.h>
#import <CoreSpeech/CSVTUITrainingSessionWithPayload.h>
#import <CoreSpeech/CSSpIdTrainingParallelRecorder.h>
#import <CoreSpeech/CSPreferences.h>
#import <CoreSpeech/CSAudioTimeConverter.h>
#import <CoreSpeech/CSBuiltInVoiceTriggerWatch.h>
#import <CoreSpeech/NviSignalProvidersController.h>
#import <CoreSpeech/CSXPCClient.h>
#import <CoreSpeech/CSStateMachine.h>
#import <CoreSpeech/CSPlainAudioFileWriter.h>
#import <CoreSpeech/CSEventMonitor.h>
#import <CoreSpeech/CSAudioChunkForTV.h>
#import <CoreSpeech/CSVoiceTriggerDataCollector.h>
#import <CoreSpeech/CSAudioFileLog.h>
#import <CoreSpeech/CSVoiceTriggerFileLogger.h>
#import <CoreSpeech/CSAudioStreamRequest.h>
#import <CoreSpeech/CSSpIdSpeakerVectorGenerator.h>
#import <CoreSpeech/CSActivationEvent.h>
#import <CoreSpeech/CSSpIdTIOnlySpeakerRecognizer.h>
#import <CoreSpeech/CSScreenLockMonitor.h>
#import <CoreSpeech/CSAssetController.h>
#import <CoreSpeech/CSSpeechControllerMonitorImpl.h>
#import <CoreSpeech/CSAudioDecoder.h>
#import <CoreSpeech/CSVoiceTriggerFirstPassHearstAP.h>
#import <CoreSpeech/CSAudioRouteChangeMonitor.h>
#import <CoreSpeech/CSSmartSiriVolumeEnablePolicy.h>
#import <CoreSpeech/CSVoiceTriggerAssetChangeMonitor.h>
#import <CoreSpeech/NviAudioFileWriter.h>
#import <CoreSpeech/CSVoiceTriggerEnabledPolicyNonAOP.h>
#import <CoreSpeech/CSBluetoothWirelessSplitterMonitor.h>
#import <CoreSpeech/CSSiriClientBehaviorMonitor.h>
#import <CoreSpeech/CSSpeechEndpointAssetMetaUpdateMonitor.h>
#import <CoreSpeech/CSVoiceTriggerAssetHandlerMac.h>
#import <CoreSpeech/CSVoiceTriggerAOPModeEnabledPolicyIOS.h>
#import <CoreSpeech/CSVoiceTriggerStatAggregator.h>
#import <CoreSpeech/CSMyriadPHash.h>
#import <CoreSpeech/NviConstants.h>
#import <CoreSpeech/CSVoiceTriggerEventInfoProvider.h>
#import <CoreSpeech/NviUtils.h>
#import <CoreSpeech/CSVoiceTriggerFidesClient.h>
#import <CoreSpeech/CSVTUIRegularExpressionMatcher.h>
#import <CoreSpeech/CSEncryptedAudioFileWriter.h>
#import <CoreSpeech/CSAudioStartStreamOption.h>
#import <CoreSpeech/CSSelfTriggerDetectorEnabledPolicyIOS.h>
#import <CoreSpeech/CSDispatchGroup.h>
#import <CoreSpeech/CSSmartSiriVolumeController.h>
#import <CoreSpeech/CSBluetoothDeviceInfo.h>
#import <CoreSpeech/CSVTUIASRGrammars.h>
#import <CoreSpeech/CSP2PService.h>
#import <CoreSpeech/CSVoiceTriggerAwareZeroFilter.h>
#import <CoreSpeech/CSBuiltInVoiceTriggerEnabledPolicyMac.h>
#import <CoreSpeech/CSUtils.h>
#import <CoreSpeech/CSDiagnosticReporter.h>
#import <CoreSpeech/CSKeywordAnalyzerNDAPI.h>
#import <CoreSpeech/CSBuiltinSpeakerStateMonitor.h>
#import <CoreSpeech/NviDirectionalitySignalData.h>
#import <CoreSpeech/CSEndpointerMetrics.h>
#import <CoreSpeech/CSSACInfoMonitor.h>
#import <CoreSpeech/CSRemoteControlClient.h>
#import <CoreSpeech/CSVoiceTriggerRTModel.h>
#import <CoreSpeech/CSAudioRouteChangeMonitorImpl.h>
#import <CoreSpeech/CSUserVoiceProfile.h>
#import <CoreSpeech/CSiTunesAccountManager.h>
#import <CoreSpeech/CSVoiceTriggerEnabledMonitor.h>
#import <CoreSpeech/CSVTSecondPassPhraseScore.h>
#import <CoreSpeech/CSVTSecondPassScorer.h>
#import <CoreSpeech/CSRemoteRecordClient.h>
#import <CoreSpeech/CSVoiceProfileContext.h>
#import <CoreSpeech/CSVTUIAudioSessionRemote.h>
#import <CoreSpeech/CSSiriEnabledMonitor.h>
#import <CoreSpeech/CSVoiceProfileRetrainManager.h>
#import <CoreSpeech/NviCSAudioDataSource.h>
#import <CoreSpeech/CSAlertBehaviorPredictor.h>
#import <CoreSpeech/CSBeepCanceller.h>
#import <CoreSpeech/CSBuiltInVoiceTrigger.h>
#import <CoreSpeech/CSVoiceTriggerSecondPass.h>
#import <CoreSpeech/CSSpIdContext.h>
#import <CoreSpeech/CSActivationEventNotifier.h>
#import <CoreSpeech/CSVoiceTriggerEventNotifier.h>
#import <CoreSpeech/CSAudioZeroFilter.h>
#import <CoreSpeech/CSSoftwareUpdateCheckingMonitor.h>
#import <CoreSpeech/CSAssetManagerEnablePolicy.h>
#import <CoreSpeech/CSVoiceTriggerAOPModeEnabledPolicyFactory.h>
#import <CoreSpeech/CSBatteryMonitor.h>
#import <CoreSpeech/CSVoiceProfilePruner.h>
#import <CoreSpeech/CSAudioCircularBuffer.h>
#import <CoreSpeech/CSVoiceTriggerAssetMetaUpdateMonitor.h>
#import <CoreSpeech/CSSpeakerIdRecognizerFactory.h>
#import <CoreSpeech/CSAudioStreamProvidingProxy.h>
#import <CoreSpeech/CSAssetManagerEnablePolicyMac.h>
#import <CoreSpeech/CSRemoteVADCircularBuffer.h>
#import <CoreSpeech/CSAudioStream.h>
#import <CoreSpeech/CSServerEndpointFeatures.h>
#import <CoreSpeech/CSVTUIAudioSessionAVVC.h>
#import <CoreSpeech/CSVoiceTriggerSpeakerTrainer.h>
#import <CoreSpeech/CSSiriRestrictionOnLockScreenMonitor.h>
#import <CoreSpeech/CSSpringboardStartMonitor.h>
#import <CoreSpeech/CSAudioProvider.h>
#import <CoreSpeech/CSListeningEnabledPolicyWatch.h>
#import <CoreSpeech/CSOpportuneSpeakEventMonitor.h>
#import <CoreSpeech/CSAlwaysOnProcessorStateMonitor.h>
#import <CoreSpeech/CSAudioChunk.h>
#import <CoreSpeech/CSVoiceTriggerEnabledPolicyAOP.h>
#import <CoreSpeech/CSNovDetectorResult.h>
#import <CoreSpeech/CSNovDetector.h>
#import <CoreSpeech/CSHybridEndpointAnalyzer.h>
#import <CoreSpeech/CSOpportuneSpeakListenerOption.h>
#import <CoreSpeech/CSAudioSessionInfoProvider.h>
#import <CoreSpeech/CSVoiceTriggerEnrollmentDataManager.h>
#import <CoreSpeech/CSEndpointerProxy.h>
#import <CoreSpeech/CSVoiceTriggerStatistics.h>
#import <CoreSpeech/CSFirstUnlockMonitor.h>
#import <CoreSpeech/CSAudioPowerMeter.h>
#import <CoreSpeech/CSPhraseSpotterEnabledMonitor.h>
#import <CoreSpeech/CSVoiceIdXPCConnection.h>
#import <CoreSpeech/CSSpIdSATAnalyzer.h>
#import <CoreSpeech/CSVoiceTriggerAlwaysOnProcessor.h>
#import <CoreSpeech/CSVoiceTriggerInfo.h>
#import <CoreSpeech/CSFallbackAudioSessionReleaseProvider.h>
#import <CoreSpeech/CSSPGEndpointAnalyzer.h>
#import <CoreSpeech/CSLanguageDetectorOption.h>
#import <CoreSpeech/CSStartOfSpeechDetector.h>
#import <CoreSpeech/CSAudioServerCrashMonitor.h>
#import <CoreSpeech/CSVoiceTriggerXPCClient.h>
#import <CoreSpeech/CSCoreSpeechDaemonStateMonitor.h>
#import <CoreSpeech/CSKeywordAnalyzerQuasar.h>
#import <CoreSpeech/CSNetworkAvailabilityMonitor.h>
#import <CoreSpeech/CSSpeechDetectionDevicePresentMonitor.h>
#import <CoreSpeech/CSSpeakerIdNviSignalReceiver.h>
#import <CoreSpeech/CSAudioRecordDeviceInfo.h>
#import <CoreSpeech/CSOpportuneSpeakListnerTestService.h>
#import <CoreSpeech/CSAsset.h>
#import <CoreSpeech/CSAudioConverter.h>
#import <CoreSpeech/CSLanguageCodeUpdateMonitor.h>
#import <CoreSpeech/CSPolicy.h>
#import <CoreSpeech/CSSpeakerIdNviAssetsProvider.h>
#import <CoreSpeech/CSSelfTriggerDetector.h>
#import <CoreSpeech/CSSpeakerDetectorNDAPI.h>
#import <CoreSpeech/CSVTUIKeywordDetector.h>
#import <CoreSpeech/CSAudioRecorder.h>
#import <CoreSpeech/CSCommandControlBehaviorMonitor.h>
#import <CoreSpeech/NviContext.h>
#import <CoreSpeech/CSAESKeyManager.h>
#import <CoreSpeech/CSJarvisTriggerModeMonitor.h>
#import <CoreSpeech/CSOSTransaction.h>
#import <CoreSpeech/CSKeywordDetector.h>
#import <CoreSpeech/NviSignalData.h>
#import <CoreSpeech/CSSRFUserSettingMonitor.h>
#import <CoreSpeech/CSVoiceTriggerEnabledPolicyHorseman.h>
