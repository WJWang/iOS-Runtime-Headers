/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

@class NSString;

@interface AccountSettingsUISetupController : PSSetupController {
    unsigned int _didAlreadyPopController : 1;
    unsigned int _didAttemptFirstSyncSetup : 1;
    unsigned int _forceMailSetup : 1;
    NSString *_emailEnteredByUser;
}

@property(retain) NSString * emailEnteredByUser;

- (void)_reallyFinishedAccountSetup;
- (void)controller:(id)arg1 finishedSetupWithAccount:(id)arg2;
- (void)dealloc;
- (id)emailEnteredByUser;
- (void)finishedAccountSetup;
- (void)forceMailSetup;
- (void)setEmailEnteredByUser:(id)arg1;
- (id)syncControllerSpecifierNamed:(id)arg1 account:(id)arg2;

@end