/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSCredentialSaveOperation : VSAsyncOperation {
    VSAccountStore * _accountStore;
    VSOptional * _result;
    VSAccount * _unsavedAccount;
}

@property (nonatomic, retain) VSAccountStore *accountStore;
@property (nonatomic, retain) VSOptional *result;
@property (nonatomic, retain) VSAccount *unsavedAccount;

- (void).cxx_destruct;
- (void)_didSaveAccount:(id)arg1 withResult:(BOOL)arg2 error:(id)arg3;
- (id)accountStore;
- (void)executionDidBegin;
- (id)init;
- (id)initWithUnsavedAccount:(id)arg1 accountStore:(id)arg2;
- (id)result;
- (void)setAccountStore:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setUnsavedAccount:(id)arg1;
- (id)unsavedAccount;

@end
