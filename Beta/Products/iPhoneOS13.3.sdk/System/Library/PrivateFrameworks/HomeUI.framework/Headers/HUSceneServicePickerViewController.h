/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSceneServicePickerViewController : HUSelectableServiceGridViewController {
    HFActionSetBuilder * _actionSetBuilder;
    <HUSceneServicePickerViewControllerDelegate> * _servicePickerDelegate;
}

@property (nonatomic, readonly) HFActionSetBuilder *actionSetBuilder;
@property (nonatomic) <HUSceneServicePickerViewControllerDelegate> *servicePickerDelegate;

- (void).cxx_destruct;
- (bool)_canSelectMediaAccessoryItem:(id)arg1;
- (void)_cancel:(id)arg1;
- (void)_done:(id)arg1;
- (void)_presentUnsupportedAlertWithTitle:(id)arg1 message:(id)arg2;
- (id)_updateActionSetBuilder;
- (id)actionSetBuilder;
- (bool)canSelectItem:(id)arg1 indexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)initWithActionSetBuilder:(id)arg1 servicePickerDelegate:(id)arg2;
- (id)initWithServiceGridItemManager:(id)arg1;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (id)layoutOptionsForSection:(long long)arg1;
- (id)servicePickerDelegate;
- (void)setServicePickerDelegate:(id)arg1;

@end
