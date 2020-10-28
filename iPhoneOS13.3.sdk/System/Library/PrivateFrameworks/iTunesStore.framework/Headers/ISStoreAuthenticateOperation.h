//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import <iTunesStore/SSAuthenticateRequestDelegate-Protocol.h>

@class SSAuthenticateResponse, SSAuthenticationContext, SSMutableAuthenticationContext;

@interface ISStoreAuthenticateOperation : ISOperation <SSAuthenticateRequestDelegate>
{
    SSMutableAuthenticationContext *_authenticationContext;
    SSAuthenticateResponse *_authenticateResponse;
    id _parentViewController;
}

+ (BOOL)_copyErrorForAuthenticateResponse:(id)arg1 error:(id )arg2;
@property(retain) id parentViewController; // @synthesize parentViewController=_parentViewController;
- (void)_handleAuthenticateResponse:(id)arg1;
- (id)uniqueKey;
- (void)run;
- (id)authenticatedAccountDSID;
@property(readonly) SSAuthenticationContext *authenticationContext;
@property(readonly) SSAuthenticateResponse *authenticateResponse;
- (void)dealloc;
- (id)initWithAuthenticationContext:(id)arg1;

@end

