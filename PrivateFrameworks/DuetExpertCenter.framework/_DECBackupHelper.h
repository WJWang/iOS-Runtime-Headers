/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECBackupHelper : NSObject {
    _DKDataProtectionStateMonitor *_dataProtection;
    NSFileManager *_fm;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_currentBackupVersionPath;
- (BOOL)backupNewerThanCurrentState;
- (id)backupPathForExpert:(id)arg1;
- (BOOL)canBackup;
- (BOOL)canRestore;
- (BOOL)createBackupDirectoriesIfMissing;
- (BOOL)finishBackup;
- (id)init;
- (BOOL)isClassCLocked;
- (BOOL)markRestoreAsNotDone;
- (BOOL)markVersionOfBackupDirectoryAsCurrent;
- (BOOL)probePathAt:(id)arg1;
- (BOOL)restoreDone;
- (id)restorePathForExpert:(id)arg1;
- (BOOL)restoreStart;
- (BOOL)restoredAlready;

@end