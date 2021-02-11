/* Generated by RuntimeBrowser.
 */

@protocol WFFileStorageService <NSObject>

@required

+ (Class)resultItemClass;
+ (NSString *)serviceName;

- (Class)accessResourceClass;
- (void)appendText:(void *)arg1 toPath:(void *)arg2 options:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFContentCollection *, NSError *, void*
- (void)createFolderAtPath:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFContentCollection *, NSError *, void*
- (void)deleteFiles:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: WFContentCollection *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getSharingURLsForFiles:(void *)arg1 usePublicURLs:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: WFContentCollection *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (bool)hasPublicURLs;
- (Class)objectRepresentationClass;
- (void)retrieveFilesAtPath:(void *)arg1 options:(void *)arg2 progress:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, unsigned long long, NSProgress *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFContentCollection *, NSError *, void*
- (<WFFileStorageServiceOperation> *)saveFiles:(void *)arg1 toPath:(void *)arg2 options:(void *)arg3 progress:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: WFContentCollection *, NSString *, unsigned long long, NSProgress *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFContentCollection *, NSError *, void*
- (void)searchFiles:(void *)arg1 inPath:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFContentCollection *, NSError *, void*
- (NSString *)storageLocationPrefix;
- (bool)supportsJumpingToSubdirectoryInUI;

@optional

- (void)retrieveFilesWithUserInterface:(void *)arg1 initialDirectoryPath:(void *)arg2 options:(void *)arg3 progress:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: <WFUserInterface> *, NSString *, unsigned long long, NSProgress *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFContentCollection *, NSError *, void*
- (<WFFileStorageServiceOperation> *)saveFiles:(void *)arg1 withUserInterface:(void *)arg2 options:(void *)arg3 progress:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: WFContentCollection *, <WFUserInterface> *, unsigned long long, NSProgress *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFContentCollection *, NSError *, void*

@end