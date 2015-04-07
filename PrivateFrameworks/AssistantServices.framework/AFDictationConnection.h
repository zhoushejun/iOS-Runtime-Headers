/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class <AFDictationDelegate>, NSString, NSXPCConnection;

@interface AFDictationConnection : NSObject {
    unsigned int _audioSessionID;
    float _averagePower;
    NSXPCConnection *_connection;
    <AFDictationDelegate> *_delegate;
    BOOL _hasActiveRequest;
    BOOL _isCapturingSpeech;
    BOOL _isWaitingForAudioFile;
    NSString *_lastUsedLanguage;
    float _peakPower;
    unsigned int _stateInSync : 1;
}

@property(readonly) BOOL currentlyUsingLocalDication;
@property <AFDictationDelegate> * delegate;

+ (BOOL)dictationIsEnabled;
+ (BOOL)dictationIsSupportedForLanguageCode:(id)arg1 error:(id*)arg2;
+ (void)fetchSupportedLanguageCodes:(id)arg1;

- (void).cxx_destruct;
- (void)_availabilityChanged:(id)arg1;
- (void)_cancelRequestTimeout;
- (void)_checkAndSetIsCapturingSpeech:(BOOL)arg1;
- (void)_clearConnection;
- (id)_connection;
- (void)_connectionInterrupted;
- (id)_dictationService;
- (void)_extendRequestTimeout;
- (void)_invokeRequestTimeout;
- (void)_registerInvalidationHandlerForXPCConnection:(id)arg1;
- (void)_scheduleRequestTimeout;
- (void)_setAudioSessionID:(unsigned int)arg1;
- (void)_speechRecordingDidUpdateAveragePower:(float)arg1 peakPower:(float)arg2;
- (void)_tellDelegateAudioSessionIDChanged:(unsigned int)arg1;
- (void)_tellSpeechDelegateAudioFileFinished:(id)arg1 error:(id)arg2;
- (void)_tellSpeechDelegateDidHypothesizeSpeechPhrases:(id)arg1 languageModel:(id)arg2;
- (void)_tellSpeechDelegateDidRecognizeSpeechPhrases:(id)arg1 languageModel:(id)arg2 correctionIdentifier:(id)arg3;
- (void)_tellSpeechDelegateDidRecognizeSpeechTokens:(id)arg1 languageModel:(id)arg2;
- (void)_tellSpeechDelegateDidRecognizeTranscriptionObjects:(id)arg1 languageModel:(id)arg2;
- (void)_tellSpeechDelegateRecognitionDidFail:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidBegin;
- (void)_tellSpeechDelegateRecordingDidCancel;
- (void)_tellSpeechDelegateRecordingDidEnd;
- (void)_tellSpeechDelegateRecordingDidFail:(id)arg1;
- (void)_tellSpeechDelegateRecordingWillBegin;
- (void)_updateState;
- (void)_willCancelDictation;
- (void)_willCompleteDictation;
- (void)_willFailDictationWithError:(id)arg1;
- (void)_willStartDictationWithOptions:(id)arg1;
- (unsigned int)audioSessionID;
- (float)averagePower;
- (void)beginAvailabilityMonitoring;
- (void)cancelAvailabilityMonitoring;
- (void)cancelSpeech;
- (BOOL)currentlyUsingLocalDication;
- (void)dealloc;
- (id)delegate;
- (BOOL)dictationIsAvailableForLanguage:(id)arg1;
- (void)endSession;
- (id)init;
- (float)peakPower;
- (void)preheat;
- (void)prepareWithOptions:(id)arg1;
- (void)sendSpeechCorrection:(id)arg1 forIdentifier:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)startDictationWithLanguageCode:(id)arg1 options:(id)arg2;
- (void)startDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3;
- (void)startDictationWithSpeechFileAtURL:(id)arg1 isNarrowBand:(BOOL)arg2 options:(id)arg3 forLanguage:(id)arg4;
- (void)startDictationWithSpeechFileAtURL:(id)arg1 options:(id)arg2 forLanguage:(id)arg3;
- (void)stopSpeech;
- (void)stopSpeechWithOptions:(id)arg1;

@end
