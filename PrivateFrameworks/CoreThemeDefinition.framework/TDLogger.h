/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@class NSObject<OS_dispatch_queue>;

@interface TDLogger : NSObject {
    NSObject<OS_dispatch_queue> *_loggingQueue;
    int _verbosity;
}

@property int verbosity;

+ (id)logger;

- (void)dealloc;
- (id)init;
- (BOOL)isVerbosityLogErrorsOnly;
- (BOOL)isVerbosityLogEverything;
- (BOOL)isVerbosityLogWarningsAndErrors;
- (void)logError:(id)arg1;
- (void)logErrorWithFormat:(id)arg1;
- (void)logExtra:(id)arg1;
- (void)logExtraWithFormat:(id)arg1;
- (void)logInfo:(id)arg1;
- (void)logInfoWithFormat:(id)arg1;
- (void)logMessage:(id)arg1 whenVerbosity:(int)arg2;
- (void)logWarning:(id)arg1;
- (void)logWarningWithFormat:(id)arg1;
- (void)setVerbosity:(int)arg1;
- (int)verbosity;
- (void)waitForLoggingToComplete;

@end