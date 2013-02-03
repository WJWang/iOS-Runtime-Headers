/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSString, NSArray;

@interface FTiMessageIDQuery : FTIDSMessage <NSCopying> {
    NSArray *_responseIdentities;
    NSArray *_responseSessionTokens;
    NSString *_uri;
}

@property(copy) NSArray * responseIdentities;
@property(copy) NSArray * responseSessionTokens;
@property(setter=setURI:,copy) NSString * uri;

- (id)additionalQueryStringParameters;
- (id)bagKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)handleResponseDictionary:(id)arg1;
- (void)handleResponseHeaders:(id)arg1;
- (BOOL)hasRequiredKeys:(id*)arg1;
- (id)init;
- (id)messageBody;
- (id)requiredKeys;
- (id)responseIdentities;
- (id)responseSessionTokens;
- (void)setResponseIdentities:(id)arg1;
- (void)setResponseSessionTokens:(id)arg1;
- (void)setURI:(id)arg1;
- (id)uri;
- (BOOL)wantsHTTPGet;

@end