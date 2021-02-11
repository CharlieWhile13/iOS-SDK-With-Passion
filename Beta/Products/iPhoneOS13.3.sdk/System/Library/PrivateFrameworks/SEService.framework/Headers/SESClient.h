/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SEService.framework/SEService
 */

@interface SESClient : NSObject {
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSXPCConnection *connection;

+ (id)sharedClient;

- (void).cxx_destruct;
- (bool)connectToService;
- (id)connection;
- (void)connectionResetHandler;
- (void)setConnection:(id)arg1;
- (id)synchronousRemoteObjectProxyWithError:(id*)arg1;

@end