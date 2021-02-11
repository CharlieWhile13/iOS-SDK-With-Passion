/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBReusableSnapshotItemContainer : SBFluidSwitcherItemContainer <SBReusableView> {
    SBAppLayout * _snapshotAppLayout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBAppLayout *snapshotAppLayout;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_snapshotView;
- (void)prepareForReuse;
- (void)setContentView:(id)arg1;
- (void)setSnapshotAppLayout:(id)arg1;
- (id)snapshotAppLayout;

@end