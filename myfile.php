<?php

use AfricasTalking\SDK\AfricasTalking;

$username = 'sandbox'; // use 'sandbox' for development in the test environment
$apiKey   = 'cd1d52681da156aabe00922d9b89e0daec070b3fa71fda066602f2c74cb3789d'; // use your sandbox app API key for development in the test environment
$AT       = new AfricasTalking($username, $apiKey);

// Get one of the services
$sms      = $AT->sms();

// Use the service
$result   = $sms->send([
    'to'      => '+254704808070',
    'message' => 'Hello World!'
]);

print_r($result);


?>